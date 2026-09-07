#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float numero, raizQuadrada;
	
	printf("Digite um numero: ");
	scanf("%f" ,&numero);
	
	if  (numero >= 0){
		
		raizQuadrada = sqrt(numero);
		printf ("Raiz quadrada: %f" ,raizQuadrada);
	}else{
		printf ("Numero invalido");
	}
	return 0;

}
