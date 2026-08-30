#include <stdio.h>
#include <stdlib.h>
int main(){
	float M, H;
	
	printf("Escreva a area em metros quadrados: ");
	scanf("%f", &M);
	
	H = M * 0.0001;
	
	printf("Valor convertido em hectares: %f", H);
	
	return 0;
}