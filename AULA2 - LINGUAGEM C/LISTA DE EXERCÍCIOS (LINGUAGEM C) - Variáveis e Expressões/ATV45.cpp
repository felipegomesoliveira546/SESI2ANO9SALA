#include <stdio.h>
#include <stdlib.h>

int main(){
	char maiuscula, minuscula;
	
	printf("Escreva uma letra: ");
	scanf("%c" ,&maiuscula);
	
	minuscula = maiuscula + 32;
	
	printf("Letra convertida; %c" ,minuscula);
	
	
return 0;
}