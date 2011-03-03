#include <stdio.h>

char string[] = "test";

int main(int argc, const char * argv[]){
	/* gibt die Anzahl bytes zuürck, die test belegt*/
	printf("%d\n", sizeof(string));
	return 0;
}
