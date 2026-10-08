#include "lcs_runtime_log.hpp"

#include <chrono>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <mutex>
#include <sstream>

namespace lcs {
namespace {

struct RuntimeLogState {
    std::mutex mutex;
    std::ofstream file;
    std::filesystem::path path;
    bool enabled{};
    bool flush_every_line{true};
};

RuntimeLogState &state() {
    static RuntimeLogState s;
    return s;
}

std::string timestamp_now() {
    using clock = std::chrono::system_clock;
    const auto now = clock::now();
    const std::time_t t = clock::to_time_t(now);
    std::tm tm{};
#if defined(_WIN32)
    localtime_s(&tm, &t);
#else
    localtime_r(&t, &tm);
#endif
    const auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(
        now.time_since_epoch()) % 1000;
    std::ostringstream out;
    out << std::put_time(&tm, "%Y-%m-%d %H:%M:%S")
        << '.' << std::setw(3) << std::setfill('0') << ms.count();
    return out.str();
}

}

void runtime_log_shutdown() noexcept {
    RuntimeLogState &s = state();
    std::lock_guard<std::mutex> guard(s.mutex);
    if (s.file.is_open()) {
        s.file << '\n' << '[' << timestamp_now() << "] shutdown\n";
        s.file.flush();
        s.file.close();
    }
    s.path.clear();
    s.enabled = false;
}

bool runtime_log_enabled() noexcept {
    RuntimeLogState &s = state();
    std::lock_guard<std::mutex> guard(s.mutex);
    return s.enabled && s.file.is_open();
}

std::filesystem::path runtime_log_path() {
    RuntimeLogState &s = state();
    std::lock_guard<std::mutex> guard(s.mutex);
    return s.path;
}

void runtime_log_line(std::string_view line) {
    RuntimeLogState &s = state();
    std::lock_guard<std::mutex> guard(s.mutex);
    if (!s.enabled || !s.file.is_open()) return;
    s.file << '[' << timestamp_now() << "] " << line << '\n';
    if (s.flush_every_line) s.file.flush();
}

void runtime_log_error(std::string_view category, std::string_view message) {
    std::ostringstream out;
    out << category << ": " << message;
    runtime_log_line(out.str());
}

}
