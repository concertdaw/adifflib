libadiff - Audio diffing library
================================

[![pipeline status](https://gitlab.com/concert/libadiff/badges/master/pipeline.svg)](
    https://gitlab.com/concert/libadiff/commits/master)
[![coverage report](https://gitlab.com/concert/libadiff/badges/master/coverage.svg)](
    https://concert.gitlab.io/libadiff)

## Build:

To build you'll need:
 * [`ninja`](https://ninja-build.org/) (build system)
 * [`meson`](http://mesonbuild.com/Quick-guide.html) (build system)
 * [`glib2`](https://developer.gnome.org/glib/) with headers
 * [`libsndfile`](http://www.mega-nerd.com/libsndfile/) with headers

If you're on a Debian-based Linux system, you can install them with:
```
apt-get install ninja-build libglib2.0-dev libsndfile-dev
pip install meson  # Python3
```
Then you can build with:
```
mkdir build
meson build
ninja -C build
```
Run the tests with:
```
ninja -C build test
```
To enable coverage collection:
```
mesonconf build -Db_coverage=true
```
Then after running the tests:
```
ninja -C build coverage-html
```

To build the docs:
```
doxygen
```
