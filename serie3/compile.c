/* 
 * author(s):   Mathieu Simon
 *              Thomas Rickenbach
 * modified:    2011-04-20
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include "memory.h"
#include "mips.h"
#include "compiler.h"
 
int main ( int argc, char** argv ) {
	int count;
	count = argc;
	count = count-1;

	if (count == 2){
		printf("Input: %s\n", argv[1]);
                compiler(argv[1], argv[2]);
		return EXIT_SUCCESS;
	}

	else {
		printf("usage: <commandName> expression filename\n");
		return EXIT_FAILURE;
        }
}

