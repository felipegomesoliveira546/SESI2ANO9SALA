#include <stdio.h>
#include <stdlib.h>
int main(){
	int numero, centena, dezena, unidade, invertido;
	
	printf("Digite um numero de 3 digitos (100 a 999): ");
	scanf("%d", &numero);
	
	centena = numero / 100;
	dezena = (numero / 10) % 10;
	unidade = numero % 10;
	
	invertido = (unidade * 100) + (dezena * 10) + centena;
	
	printf("Numero invertido: %d", invertido);
	
	return 0;
}