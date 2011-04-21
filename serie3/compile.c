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
   	int i;
	int count;
	count = argc;
	count = count-1;

	if (count<2){
		printf("usage: <commandName> expression filename\n");
		return EXIT_FAILURE;
	}

	if (count>2){
		printf("usage: <commandName> expression filename\n");
		return EXIT_FAILURE;
	}

	else {
		printf("Input: %s\n", argv[1]);
		//	system(./compile/* TODO: Task (c) implement main */
		return EXIT_SUCCESS;
	}
}

