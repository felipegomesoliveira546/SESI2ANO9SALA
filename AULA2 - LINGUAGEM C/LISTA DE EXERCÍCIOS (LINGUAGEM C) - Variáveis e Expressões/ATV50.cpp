#include <stdio.h>
#include <stdlib.h>
int main(){
	int idade, anoAtual, anoNascimento;
	
	printf("Digite a idade e o ano atual: ");
	scanf("%d %d", &idade, &anoAtual);
	
	anoNascimento = anoAtual - idade;
	
	printf("Ano de nascimento: %d", anoNascimento);
	
	return 0;
}