#include <stdio.h>
#include <stdlib.h>

int main(){
    float precoAntigo, precoNovo;

    printf("Digite o preco antigo: ");
    scanf("%f", &precoAntigo);

    if (precoAntigo <= 50){
        precoNovo = precoAntigo * 1.05;
    } else if (precoAntigo <= 100){
        precoNovo = precoAntigo * 1.10;
    } else {
        precoNovo = precoAntigo * 1.15;
    }

    printf("Preco novo: %f\n", precoNovo);

    if (precoNovo <= 80){
        printf("Barato");
    } else if (precoNovo <= 120){
        printf("Normal");
    } else if (precoNovo <= 200){
        printf("Caro");
    } else {
        printf("Muito caro");
    }

    return 0;
}