#include <stdio.h>
#include <stdlib.h>

int main(){
	float a, b, c, d, mediaAritmetica;
	
	printf("Escreva quatro notas: ");
	scanf("%f %f %f %f" ,&a, &b, &c, &d);
	
	mediaAritmetica = (a + b + c + d) / 4;
	
	printf("Media aritmetica das quatro notas: %f",mediaAritmetica);
	return 0;
}
