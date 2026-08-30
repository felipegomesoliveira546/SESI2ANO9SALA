#include <stdio.h>
#include <stdlib.h>

int main(){
	float M, L;
	
	printf("Escreva um valor de volume em litros: ");
	scanf("%f" , &L);
	
	M = L / 1000;
	
	printf("Valor de volume convertido em metros cubicos: %f" ,M);
	
	return 0;
}