#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float diasTrabalhados, valor, valorcomdesconto;
	
	printf("Escreva quantidade de dias a trabalhar: ");
	scanf("%f" ,&diasTrabalhados);
	
	valor= diasTrabalhados * 30.00;
	valorcomdesconto = valor - (valor * 0.08);
	
	printf("Valor a pagar: %f" ,valorcomdesconto);
	return 0;
}