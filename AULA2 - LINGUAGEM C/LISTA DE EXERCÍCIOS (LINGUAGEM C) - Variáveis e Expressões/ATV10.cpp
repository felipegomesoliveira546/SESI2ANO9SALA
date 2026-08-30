#include <stdio.h>
#include <stdlib.h>

int main(){
	float K, M;
	
	printf("Escreva a velocidade em km/h: ");
	scanf ("%f" ,&K);
	
	M = K / 3.6;
	
	printf ("Conversao para m/s: %f" ,M);
	
	return 0;
}