#include <stdio.h>
#include <stdlib.h>

int main(){
	float F, C;
	
	printf("Escreva uma temperatura em  Fahrenheit:");
	scanf("%f" ,&F);
	
	C = 5.0 * (F - 32.0) / 9.0;
	
	printf ("Temperatura convertida em graus celsius: %f" ,C);
	
	return 0;
}