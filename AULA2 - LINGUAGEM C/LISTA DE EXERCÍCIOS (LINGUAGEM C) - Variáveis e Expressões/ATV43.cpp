#include <stdio.h>
#include <stdlib.h>
int main(){
	float valorTotal, totalComDesconto, parcela, comissaoAVista, comissaoParcelada;
	
	printf("Digite o valor total da venda: ");
	scanf("%f", &valorTotal);
	
	totalComDesconto = valorTotal - (valorTotal * 0.10);
	parcela = totalComDesconto / 3;
	comissaoAVista = totalComDesconto * 0.05;
	comissaoParcelada = valorTotal * 0.05;
	
	printf("Total com desconto: %f\n", totalComDesconto);
	printf("Valor de cada parcela (3x): %f\n", parcela);
	printf("Comissao (venda a vista): %f\n", comissaoAVista);
	printf("Comissao (venda parcelada): %f\n", comissaoParcelada);
	
	return 0;
}