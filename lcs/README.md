# GTA: Liberty City Stories

Targets the ULUS-10041 v1.05 PSP release.

```text
config/       LCSNative.ini
generated/    AOT C++ generated from the executable
host/         HLE, renderer, audio, input and game patches
scripts/      Build and run scripts
third_party/  Bundled dependencies
game/         Your game files; ignored by Git
progress/     Development history; ignored by Git
```

Linux builds with `scripts/build_linux.sh` and runs with
`scripts/play_linux.sh`. The GPU path is
Vulkan. `config/LCSNative.ini` keeps `Backend=DirectX12` because that
file is also the Windows configuration; on Linux the same value
selects Vulkan. `Backend=Vulkan` selects it by
name. `glslangValidator` compiles `host/vulkan/ge.vert` and
`host/vulkan/ge.frag` during the build.
