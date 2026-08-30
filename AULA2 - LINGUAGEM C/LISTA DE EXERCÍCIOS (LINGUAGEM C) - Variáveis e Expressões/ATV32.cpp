#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero, triplo, dobro, sucessorTriplo, antecessorDobro, soma;
	
	printf("Escreva um numero inteiro: ");
	scanf ("%d" , &numero);
	
	triplo = numero * 3;
	sucessorTriplo = (numero * 3) + 1;
	dobro = numero * 2;
	antecessorDobro = (numero * 2) - 1;
	soma = sucessorTriplo + antecessorDobro;
	
	printf("O triplo: %d ," ,triplo);
	printf(" /O sucessor do triplo: %d" ,sucessorTriplo);
	printf(" /O dobro: %d ," ,dobro);
	printf(" /O antecessor do dobro: %d ," ,antecessorDobro);
	printf(" /A soma do sucessor de seu triplo com o antecessor de seu dobro: %d ." ,soma);
	
	return 0;
}