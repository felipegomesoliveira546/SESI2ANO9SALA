#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigo, quantidade;
    float preco, total;

    printf("Digite o codigo do produto e a quantidade: ");
    scanf("%d %d", &codigo, &quantidade);

    if (codigo == 100) preco = 1.20;
    else if (codigo == 101) preco = 1.30;
    else if (codigo == 102) preco = 1.50;
    else if (codigo == 103) preco = 1.20;
    else if (codigo == 104) preco = 1.70;
    else if (codigo == 105) preco = 2.20;
    else if (codigo == 106) preco = 1.00;
    else {
        printf("Codigo invalido");
        return 0;
    }

    total = preco * quantidade;
    printf("Total a pagar: %f", total);

    return 0;
}