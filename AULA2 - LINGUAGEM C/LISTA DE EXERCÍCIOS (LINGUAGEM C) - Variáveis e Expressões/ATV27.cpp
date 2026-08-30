#include <stdio.h>
#include <stdlib.h>
int main(){
	float H, M;
	
	printf("Escreva a area em hectares: ");
	scanf("%f", &H);
	
	M = H * 10000;
	
	printf("Valor convertido em metros quadrados: %f", M);
	
	return 0;
}