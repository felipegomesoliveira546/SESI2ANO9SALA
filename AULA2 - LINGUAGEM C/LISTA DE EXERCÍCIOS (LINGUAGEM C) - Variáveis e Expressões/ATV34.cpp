#include <stdio.h>
#include <stdlib.h>

int main(){
	float raio, area;
	
	printf("Digite o raio do circulo: ");
	scanf("%f" ,&raio);
	
	area= 3.141592 * (raio*raio);
	
	printf("A area e de: %f", area);
	return 0;
}