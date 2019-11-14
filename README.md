data structure

# usage

**debug**

```
CC=clang CXX=clang++ meson build -Db_sanitize=address -Db_lundef=false
cd build
ninja
```

**release**

```
CC=clang CXX=clang++ meson build  # optimization flags
cd build-release
ninja
```
