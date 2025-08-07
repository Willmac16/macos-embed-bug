# macOS `#embed` bug w/ `clang++`
This is a small example repo that demonstrates on Apple clang version 17.0.0 that the exact same source code will fail to compile with `#embed` in it if passed to clang++ rather than clang

I found the behavior trying to compile [nextpnr](https://github.com/YosysHQ/nextpnr) on my mac again after some time had passed, and no releases would compile.

## Reproducing the Bug
Assuming you are running on a version of apple clang that suffers from this behavior

```bash
make min_c
```

should run without issues

and 
```bash
make min_cxx
```
should report the error
```bash
error: constant expression evaluates to -20 which cannot be narrowed to type 'uint8_t' (aka 'unsigned char') [-Wc++11-narrowing]
```
