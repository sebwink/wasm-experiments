#!/bin/bash

mkdir $1
cp templates/emscripten.cpp.mak $1/Makefile
cp templates/index.html $1
