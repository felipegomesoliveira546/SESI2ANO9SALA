#include <stdio.h>
#include <stdlib.h>
int main(){
	float alturaDegrau, alturaDesejada, quantidadeDegraus;
	
	printf("Digite a altura do degrau e a altura desejada: ");
	scanf("%f %f", &alturaDegrau, &alturaDesejada);
	
	quantidadeDegraus = alturaDesejada / alturaDegrau;
	
	printf("Quantidade de degraus a subir: %f", quantidadeDegraus);
	
	return 0;
}