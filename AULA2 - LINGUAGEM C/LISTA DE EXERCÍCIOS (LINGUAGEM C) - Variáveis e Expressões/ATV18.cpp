#include <stdio.h>
#include <stdlib.h>

int main(){
	float M, L;
	
	printf("Escreva um valor de volume em metros cubicos: ");
	scanf("%f" , &M);
	
	L = 1000 * M;
	
	printf("Valor convertido em litros: %f" ,L);
	
	return 0;
	
}