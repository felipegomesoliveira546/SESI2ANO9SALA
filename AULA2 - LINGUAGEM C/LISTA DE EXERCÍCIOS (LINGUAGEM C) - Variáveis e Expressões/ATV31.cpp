#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, ant, suc;
	
	printf("Escreva um numero inteiro: ");
	scanf("%d" , &a);
	
	ant= a - 1;
	suc= a + 1;
	
	printf("O seu antecessor: %d. E seu sucessor: %d" ,ant ,suc);

	return 0;	
}