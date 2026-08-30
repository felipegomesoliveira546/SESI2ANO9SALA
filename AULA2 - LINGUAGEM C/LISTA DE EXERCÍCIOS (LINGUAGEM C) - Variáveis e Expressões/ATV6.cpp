#include <stdio.h>
#include <stdlib.h>

int main (){
	float C, F;
	
	printf ("Escreva uma temperatura em graus celsius:");
	scanf ("%f", &C);
	
	F = C * (9.0 / 5.0) + 32.0;
	
	printf ("Temperatura convertida em Fahrenheit: %f" ,F);
	
	return 0;
}
	