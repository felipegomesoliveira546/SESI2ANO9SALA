#include <stdio.h>
#include <stdlib.h>
int main(){
	float M, J;
	
	printf("Escreva o comprimento em metros: ");
	scanf("%f", &M);
	
	J = M / 0.91;
	
	printf("Valor convertido em jardas: %f", J);
	
	return 0;
}