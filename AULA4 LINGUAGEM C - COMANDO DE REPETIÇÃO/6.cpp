#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, soma = 0, valor = 0, mediaFinal = 0;
	
	printf("Escreva 10 valores para caluclar a media: ");
	
	for(i=1; i<=10; i++){
		
		scanf("%d" ,&valor);
		soma = (soma + valor);
	}
	
	mediaFinal = soma/10;
	printf ("Media final eh de: %d" , mediaFinal);
}