#include <stdio.h>
#include <stdlib.h>
int main(){
	float comprimento, largura, precoMetro, perimetro, custo;
	
	printf("Digite comprimento, largura e preco do metro de tela: ");
	scanf("%f %f %f", &comprimento, &largura, &precoMetro);
	
	perimetro = 2 * (comprimento + largura);
	custo = perimetro * precoMetro;
	
	printf("Custo para cercar o terreno: %f", custo);
	
	return 0;
}