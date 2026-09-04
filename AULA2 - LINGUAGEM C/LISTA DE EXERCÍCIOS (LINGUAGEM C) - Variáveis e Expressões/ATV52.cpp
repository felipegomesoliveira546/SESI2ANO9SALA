#include <stdio.h>
#include <stdlib.h>
int main(){
	float investimento1, investimento2, investimento3, premio, totalInvestido;
	float ganho1, ganho2, ganho3;
	
	printf("Digite quanto cada um investiu (3 valores) e o valor do premio: ");
	scanf("%f %f %f %f", &investimento1, &investimento2, &investimento3, &premio);
	
	totalInvestido = investimento1 + investimento2 + investimento3;
	
	ganho1 = (investimento1 / totalInvestido) * premio;
	ganho2 = (investimento2 / totalInvestido) * premio;
	ganho3 = (investimento3 / totalInvestido) * premio;
	
	printf("Ganho 1: %f\n", ganho1);
	printf("Ganho 2: %f\n", ganho2);
	printf("Ganho 3: %f\n", ganho3);
	
	return 0;
}