#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float altura, raio, volume;
	
	printf("Digite a altura e o raio do cilindro: ");
	scanf("%f %f" ,&altura, &raio);
	
	volume = 3.141592 * ((raio * raio) * altura);
	
	printf("O volume do cilindro: %f" , volume);
	return 0;
}