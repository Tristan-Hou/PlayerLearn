#! /bin/bash
NDK_ROOT=/Users/hou/Library/Android/sdk/ndk/20.1.5948944
PREBUILD=$NDK_ROOT/toolchains/arm-linux-androideabi-4.9/prebuilt/darwin-x86_64
PLATFORM=$NDK_ROOT/platforms/android-28/arch-arm
#SYSROOT=$NDK_ROOT/sysroot
SYSROOT=$NDK_ROOT/toolchains/llvm/prebuilt/darwin-x86_64/sysroot
export PATH=$PATH:$PREBUILD/bin:$SYSROOT/usr/include:

export LGFLAGS="-L$PLATFORM/usr/lib -L$PREBUILD/arm-linux-androideabi/lib -march=armv7-a"
export CFLAGS="-I$SYSROOT/usr/include -march=armv7-a -mfloat-abi=softfp -mfpu=vfp -ffast-math -O2"

export CPPFLAGS="$CFLAGS"
export CFLAGS="$CFLAGS"
export CXXFLAGS="$CFLAGS"
export LDFLAGS="$CFLAGS"

export AS=$PREBUILD/bin/arm-linux-androideabi-as
export LD=$PREBUILD/bin/arm-linux-androideabi-ld
export NM=$PREBUILD/bin/arm-linux-androideabi-nm
export STRIP=$PREBUILD/bin/arm-linux-androideabi-strip
export RANLIB=$PREBUILD/bin/arm-linux-androideabi-ranlib
export AR=$PREBUILD/bin/arm-linux-androideabi-ar
export CXX=$NDK_ROOT/toolchains/llvm/prebuilt/darwin-x86_64/bin/armv7a-linux-androideabi29-clang++
export CC=$NDK_ROOT/toolchains/llvm/prebuilt/darwin-x86_64/bin/armv7a-linux-androideabi29-clang

./configure --host=arm-linux \
--disable-shared \
--disable-frontend \
--enable-static \
--prefix=${PWD}/armv7a

make clean
make -j8
make install


