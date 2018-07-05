#!/bin/bash

mkdir $1
cp templates/emscripten.c.mak $1/Makefile
cp templates/index.html $1
