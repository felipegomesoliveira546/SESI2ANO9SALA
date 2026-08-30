#include <stdio.h>
#include <stdlib.h>

int main (){
	float numero, quintaParte;
	
	printf("Digite um numero:");
	scanf("%f", &numero);
	
	quintaParte = numero / 5;
	
	printf("A quinta parte do numero digitado e: %f" ,quintaParte);
	
	return 0;
}