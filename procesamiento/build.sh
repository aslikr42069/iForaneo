#!/bin/sh

/usr/lib/emscripten/emcc procesarAgua.c readCSV.c -o procesarAgua.js -s EXPORTED_FUNCTIONS="['_getSinAgua']"
