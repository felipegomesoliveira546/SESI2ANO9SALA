#include <stdio.h>
#include <stdlib.h>

int main(){
	float C, P;
	printf ("Escreva o valor em centimetros: ");
	scanf ("%f" , &C);
	
	P = C / 2.54;
	
	printf ("Valor convertido em polegadas: %f" ,P);
	
	return 0;
}