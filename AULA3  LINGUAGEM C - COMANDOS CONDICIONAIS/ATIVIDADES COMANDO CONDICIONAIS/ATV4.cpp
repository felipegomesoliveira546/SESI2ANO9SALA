#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float numero, quadrado, raizQuadrado;
	
	printf ("Digite um numero: ");
	scanf ("%f" , &numero);
	
	quadrado = (numero * numero);
	raizQuadrado = sqrt(numero);
	
	if (numero >= 0){
		printf ("O numero ao quadrado: %f" ,quadrado);
		printf ("| A raiz quadrada dele: %f",raizQuadrado);
	}else{
		printf("Invalido");
	}
	return 0;
}