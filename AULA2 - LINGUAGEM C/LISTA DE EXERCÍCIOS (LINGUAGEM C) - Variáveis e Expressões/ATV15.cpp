#include <stdio.h>
#include <stdlib.h>

int main(){
	float G, R;
	
	printf("Escreva o Angulo em Radianos: ");
	scanf("%f" , &R);
	
	G = R * 180 / 3.14;
	
	printf("Valor convertido em Graus: %f" ,G);
	
	return 0;
}