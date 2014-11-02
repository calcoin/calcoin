#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/calcoin.png
ICON_DST=../../src/qt/res/icons/calcoin.ico
convert ${ICON_SRC} -resize 16x16 calcoin-16.png
convert ${ICON_SRC} -resize 32x32 calcoin-32.png
convert ${ICON_SRC} -resize 48x48 calcoin-48.png
convert calcoin-16.png calcoin-32.png calcoin-48.png ${ICON_DST}

