#!/usr/bin/env bash
set -euo pipefail
script_dir=$(cd "$(dirname "$0")" && pwd)
repo=$(cd "$script_dir/../.." && pwd)
lcs_dir=$(cd "$script_dir/.." && pwd)
bin="$repo/out/lcs-linux/lcs/LCSNative"
if [[ ! -x "$bin" ]]; then
    echo "LCSNative not found at $bin"
    echo "Build it first: lcs/scripts/build_linux.sh"
    exit 3
fi
game="$lcs_dir/game"
if [[ $# -gt 0 && "$1" != -* ]]; then
    game=$1
    shift
fi
if [[ ! -f "$game/EBOOT.ELF" ]]; then
    echo "Game root $game has no EBOOT.ELF"
    exit 4
fi
export PSPRECOMP_CONFIG="${PSPRECOMP_CONFIG:-$lcs_dir/config/LCSNative.ini}"
exec "$bin" --game "$game" "$@"
