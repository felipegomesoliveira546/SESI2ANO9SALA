#include <stdio.h>
#include <stdlib.h>

int main(){
	float M, K;
	
	printf("Escreva a velocidade em m/s: ");
	scanf ("%f" ,&M);
	
	K = M * 3.6;
	
	printf ("Conversao para km/h: %f" ,K);
	
	return 0;
}