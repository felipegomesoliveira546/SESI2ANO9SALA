#include <stdio.h>
#include <stdlib.h>

int main(){
	float K, C;
	
	printf ("Escreva uma temperatura em graus Kelvin:");
	scanf("%f" ,&K);
	
	C = K - 273.15;
	
	printf ("Temperatura convertida em Celsius: %f" ,C);
	
	return 0;
}