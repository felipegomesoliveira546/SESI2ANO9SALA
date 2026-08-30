#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float valor, valorDesconto;
	
	printf("Insira o valor: ");
	scanf("%f" ,&valor);
	
	valorDesconto = valor - (valor * 0.12);
	
	printf("Preco com desconto: %f" ,valorDesconto);
	return 0;
}