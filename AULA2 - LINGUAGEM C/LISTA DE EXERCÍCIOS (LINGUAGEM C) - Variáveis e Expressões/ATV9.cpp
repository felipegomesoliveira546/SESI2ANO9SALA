#include <stdio.h>
#include <stdlib.h>

int main(){
	float C, K;
	
	printf("Escreva a temperatura em graus celsius:");
	scanf("%f" , &C);
	
	K = C + 273.15;
	
	printf ("Temperatura convertida em graus kelvin: %f" ,K);
	
	return 0;
	
}