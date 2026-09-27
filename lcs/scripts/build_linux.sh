#!/usr/bin/env bash
# Native Linux build. The GPU path is Vulkan; DirectX 12 in LCSNative.ini selects it.
set -euo pipefail
script_dir=$(cd "$(dirname "$0")" && pwd)
repo=$(cd "$script_dir/../.." && pwd)
build="$repo/out/lcs-linux"
cmake -S "$repo" -B "$build" -G Ninja -DCMAKE_BUILD_TYPE=Release
ninja -C "$build" LCSNative
