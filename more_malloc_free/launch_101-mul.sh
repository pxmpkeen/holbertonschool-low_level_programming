#!/bin/sh

if [ "$#" -ne 1 ]; then
	echo -e "Usage: $0 test\n"
	exit 1
fi

if [ "$1" -eq 0 ] ; then
	./101-mul.out 10110111010101001101010110110010110101010010101 1000100110101101010101010101000
	echo "$?"
	exit 0
fi
