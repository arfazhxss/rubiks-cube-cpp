#!/bin/bash

CC=g++
CPPFLAGS=`pkg-config --cflags glew glew-devel ImageMagick-c++ freetype-devel glfw3`
CPPFLAGS="$CPPFLAGS -I../Include -I../Common/FreetypeGL"
LDFLAGS=`pkg-config --libs glew glew-devel ImageMagick-c++ freetype-devel glfw3`" -lGL"
LDFLAGS="$LDFLAGS -lglut ../Lib/libAntTweakBar.a -lX11"

$CC tutorial16.cpp ../Common/ogldev_util.cpp ../Common/pipeline.cpp ../Common/math_3d.cpp ../Common/camera.cpp ../Common/ogldev_atb.cpp ../Common/glut_backend.cpp ../Common/ogldev_texture.cpp ../Common/3rdparty/stb_image.cpp $CPPFLAGS $LDFLAGS -o tutorial16
