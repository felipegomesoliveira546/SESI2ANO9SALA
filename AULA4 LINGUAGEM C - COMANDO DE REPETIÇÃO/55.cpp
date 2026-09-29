#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, soma = 0, valor;
	
	printf("Escreva 10 valores: ");
	for(i=1 ; i<=10 ; i++){
		
		scanf("%d" , &valor);
		soma+=valor;
	}
	printf("Soma: %d\n" ,soma);
	return 0;

	
}