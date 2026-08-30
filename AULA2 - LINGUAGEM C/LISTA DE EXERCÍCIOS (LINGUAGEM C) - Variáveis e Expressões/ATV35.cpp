#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a, b, hipotenusa;
	
	printf("Escreva os catetos: ");
	scanf("%f %f" ,&a ,&b);
	
	hipotenusa = sqrt ((a*a)+(b*b));
	
	printf ("Resultado da hipotensa: %f" ,hipotenusa);
	
	return 0;
}
