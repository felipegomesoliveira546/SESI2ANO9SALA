#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float x, y, distancia;
	
	printf("Digite as coordenadas x e y: ");
	scanf("%f %f", &x, &y);
	
	distancia = sqrt((x*x) + (y*y));
	
	printf("Distancia ate a origem: %f", distancia);
	
	return 0;
}