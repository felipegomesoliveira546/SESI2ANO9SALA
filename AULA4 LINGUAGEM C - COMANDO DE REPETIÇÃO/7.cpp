#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int contador = 0, i, soma = 0, valor = 0, mediaFinal = 0;
	
	printf("Escreva 10 valores para calcular a media: ");
	
	for(i=1; i<=10; i++){
		scanf("%d" ,&valor);
        
		if(valor > 0) {
			soma = (soma + valor);
			contador = contador + 1;
	}
}
	
	
	mediaFinal = soma/contador;
	printf ("Media final eh de: %d" , mediaFinal);
}