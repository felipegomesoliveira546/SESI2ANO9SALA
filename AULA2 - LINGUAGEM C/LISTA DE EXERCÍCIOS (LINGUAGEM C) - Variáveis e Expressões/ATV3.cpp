#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c,soma;
	
	printf("Escreva tres numeros inteiros:");
	scanf("%d %d %d", &a, &b, &c);
	
	soma= a+b+c;
	
	printf("O resultado da soma e: %d",soma);
	
	return 0;
}