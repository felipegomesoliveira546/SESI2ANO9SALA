#include <stdio.h>
#include <stdlib.h>
int main(){
	float K, L;
	
	printf("Escreva a massa em quilogramas: ");
	scanf("%f", &K);
	
	L = K / 0.45;
	
	printf("Valor convertido em libras: %f", L);
	
	return 0;
}