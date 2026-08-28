#include <stdio.h>

int main() {
	
	float peso, altura, imc;
	
	printf("Digite sua altura em kg:");
	scanf("%f", &altura);
	
	printf("Digite seu peso em metros:");
	scanf("%f", &peso);
	
	imc = peso/ (altura * altura);
	
	printf("\nSeu IMC e: %.2f\n", imc);
	
	return 0;
	
}