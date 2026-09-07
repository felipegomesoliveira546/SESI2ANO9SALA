#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float numero, raizQuadrada, quadrado;
	
	printf ("Digite um numero: ");
	scanf ("%f" ,&numero);
	
	raizQuadrada = sqrt(numero);
	quadrado = numero * numero;
	
	if (numero >= 0){
		printf ("Raiz quadrada: %f" ,raizQuadrada);
	}else{
		printf ("Numero ao quadrado: %f" ,quadrado);
	}
	return 0;
}