#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, valor, soma = 0;

    for (i = 1; i<=10; i++) {

        printf("Escreva 10 valores: ");
        scanf("%d" , &valor);
        soma += valor;
    }

    printf("Soma: %d\n", soma);

    return 0;
}