#include <stdio.h>
#include <stdlib.h>
int main(){
	float M, A;
	
	printf("Escreva a area em metros quadrados: ");
	scanf("%f", &M);
	
	A = M * 0.000247;
	
	printf("Valor convertido em acres: %f", A);
	
	return 0;
}