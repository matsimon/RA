#!/bin/bash
if ( test -z $1 )
then
	echo "Usage: $0 <C Source>"
	exit 1
fi
gcc -ansi -pedantic -Wall -o "$(dirname $1)/$(basename $1 .c)" $1 && "$(dirname $1)/$(basename $1 .c)"
exit 0
