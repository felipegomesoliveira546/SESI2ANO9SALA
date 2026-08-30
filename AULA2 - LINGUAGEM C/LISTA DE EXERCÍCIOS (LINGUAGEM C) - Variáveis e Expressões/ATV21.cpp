#include <stdio.h>
#include <stdlib.h>
int main(){
	float L, K;
	
	printf("Escreva a massa em libras: ");
	scanf("%f", &L);
	
	K = L * 0.45;
	
	printf("Valor convertido em quilogramas: %f", K);
	
	return 0;
}