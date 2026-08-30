#include <stdio.h>
#include <stdlib.h>

int main(){
	float C, P;
	
	printf ("Escreva o valor em polegadas: ");
	scanf ("%f" , &P);
	
	C = P * 2.54;
	
	printf ("Valor convertido em centimetros: %f" ,C);
	
	return 0;
}