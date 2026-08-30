#include <stdio.h>
#include <stdlib.h>

int main (){
	float numero, quadrado;
	
	printf("Digite um numero:");
	scanf("%f", &numero);
	
	quadrado = numero * numero;
	
	printf("O quadrado do numero digitado e: %f" ,quadrado);
	
	return 0;
}