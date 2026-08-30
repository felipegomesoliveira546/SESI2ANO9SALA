#include <stdio.h>
#include <stdlib.h>
int main(){
	float J, M;
	
	printf("Escreva o comprimento em jardas: ");
	scanf("%f", &J);
	
	M = 0.91 * J;
	
	printf("Valor convertido em metros: %f", M);
	
	return 0;
}