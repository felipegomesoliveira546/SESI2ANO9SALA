#include <stdio.h>
#include <stdlib.h>

int main(){
	float Angulo, Radianos;
	
	printf("Escreva o Angulo em graus: ");
	scanf("%f" , &Angulo);
	
	Radianos = Angulo * 3.14 / 180;
	
	printf("Valor convertido em radianos: %f" ,Radianos);
	
	return 0;
}