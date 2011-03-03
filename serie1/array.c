#include <stdio.h>

double a[10]; /* array mit 10 Einträgen */

/* Deklarationen */
double getAt(int i);
double getAt2(double *p, int i);


int value = 0;
int value2 = 0;

int main(int argc, const char * argv[]){
	int i;
	for(i = 0; i < 10; i++){
		a[i] = i;
	}

	value = getAt(5); /*value sollte nun den Wert 5 haben */
	value2 = getAt2(a,4); /*value sollte nun den Wert 4 haben */

	printf("value hat den Wert: %d\n value2 hat den Wert: %d\n", value, value2);

	return 0;
}

/* Implementationen */
double getAt(int i){
	return a[i];
}

double getAt2(double *p, int i){
	return *(p+i);
}
