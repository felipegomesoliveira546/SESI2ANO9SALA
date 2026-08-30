#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float salario, novoSalario;
	
	printf("Digite salario atual: ");
	scanf("%f" ,&salario);
	
	novoSalario = salario + (salario * 0.25);
	
	printf("Ganho de salario: %f" , novoSalario);
	return 0;
}