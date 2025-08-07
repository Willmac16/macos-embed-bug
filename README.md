# macOS `#embed` bug w/ `clang++`
This is a small example repo that demonstrates on Apple clang version 17.0.0 that the exact same source code will fail to compile with `#embed` in it if passed to clang++ rather than clang

I found the behavior trying to compile [nextpnr](https://github.com/YosysHQ/nextpnr) on my mac again after some time had passed, and no releases would compile.
