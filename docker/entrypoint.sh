#!/usr/bin/env bash
set -e

# make sure that we always start a clean build
if [ -d "${HOME}/lcs-recomp/out/lcs-linux/" ]; then
	rm --recursive --force "${HOME}/lcs-recomp/out/lcs-linux/"
fi

cd "${HOME}/lcs-recomp/lcs/scripts/"
./build_linux.sh
