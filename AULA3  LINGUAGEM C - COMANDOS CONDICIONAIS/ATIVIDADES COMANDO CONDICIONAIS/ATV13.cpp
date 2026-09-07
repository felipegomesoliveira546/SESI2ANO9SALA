#include <stdio.h>
#include <stdlib.h>

int main (){
	float nota1, nota2, nota3;
	float media;
	
	printf ("Digite tres notas: ");
	scanf ("%f %f %f" ,&nota1, &nota2, &nota3);
	
	media = (nota1*1 + nota2*1 + nota3*2) / 4.0;
	
	if (media>=60){
		printf ("Voce foi aprovado");
		printf (" |Sua media: %f" ,media);
	}else{
		printf ("Voce foi reprovado");
		printf (" |Sua media: %f" ,media);
	}
	
	return 0;
}