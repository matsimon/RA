#!/bin/bash

if  [ -z "$1"  ] ; then
	echo "Usage: ./comp.sh <mySourceFile.c>"
	echo "Output: <mySourceFile>"
	exit
fi

OUT=$(echo $1 | cut -f1 -d ".")
echo "Output file: " $OUT
gcc -ansi -pedantic -Wall -o $OUT $1 
