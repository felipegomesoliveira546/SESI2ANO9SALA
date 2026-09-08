#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota1, nota2, nota3, media;
	
	printf("Digite as notas do Trabalho de Laboratorio, Avaliacaoo Semestral e Exame Final: ");
	scanf("%f %f %f" ,&nota1, &nota2, &nota3 );
	
	media = (nota1*2 + nota2*3 + nota3*5) / 10.0;
	
	if (media < 3.0) {
    printf("Reprovado");
    } else if (media < 5.0) {
    printf("Recuperacao");
    } else {
    printf("Aprovado");
}
}