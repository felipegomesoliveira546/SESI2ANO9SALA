#include <stdio.h>
#include <stdlib.h>

int  main(){
	float M, K;
	
	printf("Escreva a distancia em Milhas: ");
	scanf("%f" , &M);
	
	K = 1.61 * M;
	
	printf("Convesao para km: %f" ,K);
	
	return 0;
}