# LCS Recomp

GTA: Liberty City Stories PC port, built on [PSPRecomp](https://github.com/jessicanataliagta/PSPRecomp). Game files not included.

## Setup

Requires the US v1.05 release (ULUS-10041).

Place your decrypted `EBOOT.ELF` and the disc's `PSP_GAME` folder in `game/` for the [release](https://github.com/elmasas/lcs-recomp/releases/latest), or in `lcs/game/` when building from source.

## Build

Requires Visual Studio 2022 and LLVM (clang-cl).

```text
lcs\BUILD_LCS.bat
```

## Play

```text
lcs\PLAY_LCS.bat
```

Settings are in `lcs/config/LCSNative.ini`.

`Display.ResolutionMode` is the window (`PSP`, `Scale`, `Custom`, or
`Desktop`). `Rendering.InternalResolutionMode` is the GE render
target, with the same four choices. `Desktop` uses the monitor on
Windows and on Linux. `Rendering.TextureLodBias` shifts texture mip
selection; negative values keep textures sharper at a distance.

## Linux

The native build uses Vulkan for the GE and SDL2 for the window and
audio. It needs `glslangValidator`, plus the Vulkan, SDL2, and FFmpeg
development packages. The Linux build also compiles a small tool that
packs `lcs/host/font5x7.txt` into the F10 menu font. The Windows build
does not run that step.

```text
lcs/scripts/build_linux.sh
lcs/scripts/play_linux.sh
```

That build compiles `lcs/host/vulkan/ge.vert` and `ge.frag` to SPIR-V
with `glslangValidator`. Editing either shader rebuilds it into
`LCSNative`.

`lcs/config/LCSNative.ini` is shared with Windows, so the checked-in
setting stays `Backend=DirectX12`. On Linux that value selects the
Vulkan GE. `Backend=Vulkan` selects it explicitly, and any other
backend name keeps the software rasterizer. `LCS_VULKAN_VALIDATION=1`
turns on the Khronos validation layer and prints its warnings and
errors.

## License

MIT, see [`LICENSE`](LICENSE). Third-party notices: [`lcs/THIRD_PARTY.md`](lcs/THIRD_PARTY.md).
