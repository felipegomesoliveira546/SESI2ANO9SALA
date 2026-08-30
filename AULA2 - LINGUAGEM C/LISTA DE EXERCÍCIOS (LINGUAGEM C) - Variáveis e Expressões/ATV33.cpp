#include <stdio.h>
#include <stdlib.h>

int main(){
	float lado, area;
	
	printf("Lado do quadrado: ");
	scanf("%f" ,&lado);
	
	area = lado * lado;
	
	printf("Area do quadrado: %f" ,area);
	
	return 0;
}