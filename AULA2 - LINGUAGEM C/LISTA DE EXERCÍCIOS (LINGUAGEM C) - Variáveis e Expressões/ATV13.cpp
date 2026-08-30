#include <stdio.h>
#include <stdlib.h>

int  main(){
	float K, M;
	
	printf("Escreva a distancia em km: ");
	scanf("%f" , &K);
	
	M = K / 1.61;
	
	printf("Convesao para Milhas: %f" ,M);
	
	return 0;
}