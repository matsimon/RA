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

	verbose = TRUE;

	if (count == 2){
		if (verbose){
			printf("Input:    %s\n",argv[1]);
			printf("Postfix:  ");
		}

                compiler(argv[1], argv[2]);
		
		if (verbose) 
			printf("\nMIPS binary saved to %s\n",argv[2]);
		return EXIT_SUCCESS;
	}

	else {
		printf("usage: <commandName> expression filename\n");
		return EXIT_FAILURE;
        }
}

