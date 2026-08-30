#include <stdio.h>
#include <stdlib.h>

int main(){
	float real;
	float cotacao;
	float dolares;
	
	printf("Escreva o valor em real e cotacao do dolar: ");
	scanf("%f %f" ,&real ,&cotacao);
	
	dolares = real / cotacao;
	
	printf("Valor em dolares: %f" ,dolares);
	return 0;
}