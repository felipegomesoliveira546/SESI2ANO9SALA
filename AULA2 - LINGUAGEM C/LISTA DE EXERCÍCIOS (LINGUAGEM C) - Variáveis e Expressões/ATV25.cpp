#include <stdio.h>
#include <stdlib.h>
int main(){
	float A, M;
	
	printf("Escreva a area em acres: ");
	scanf("%f", &A);
	
	M = A * 4048.58;
	
	printf("Valor convertido em metros quadrados: %f", M);
	
	return 0;
}