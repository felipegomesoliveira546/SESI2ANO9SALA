#include <stdio.h>
#include <stdlib.h>
int main(){
	float salarioBase, salarioFinal;
	
	printf("Digite o salario base: ");
	scanf("%f", &salarioBase);
	
	salarioFinal = salarioBase + (salarioBase * 0.05) - (salarioBase * 0.07);
	
	printf("Salario a receber: %f", salarioFinal);
	
	return 0;
}