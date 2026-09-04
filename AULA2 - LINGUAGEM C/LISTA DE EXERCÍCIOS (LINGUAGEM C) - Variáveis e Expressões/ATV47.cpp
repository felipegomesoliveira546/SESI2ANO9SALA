#include <stdio.h>
#include <stdlib.h>
int main(){
	int numero, milhar, centena, dezena, unidade;
	
	printf("Digite um numero de 4 digitos (1000 a 9999): ");
	scanf("%d", &numero);
	
	milhar = numero / 1000;
	centena = (numero / 100) % 10;
	dezena = (numero / 10) % 10;
	unidade = numero % 10;
	
	printf("%d\n", milhar);
	printf("%d\n", centena);
	printf("%d\n", dezena);
	printf("%d\n", unidade);
	
	return 0;
}