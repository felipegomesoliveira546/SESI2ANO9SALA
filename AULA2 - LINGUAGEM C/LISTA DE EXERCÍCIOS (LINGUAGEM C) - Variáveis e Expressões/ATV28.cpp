#include <stdio.h>
#include <stdlib.h>

int main(){
	float a,b,c,resultado;
	
	printf("Escreva tres valores: ");
	scanf("%f %f %f" , &a, &b, &c);
	
	resultado = (a*a) + (b*b) + (c*c);
	
	printf("Resultado da soma dos quadrados dos três valores lidos: %f" ,resultado);
	
	return 0;
}
