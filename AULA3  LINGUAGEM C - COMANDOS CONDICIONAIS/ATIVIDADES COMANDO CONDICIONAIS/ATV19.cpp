#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if ((numero % 3 == 0 || numero % 5 == 0) && !(numero % 3 == 0 && numero % 5 == 0)){
        printf("Divisivel por 3 ou por 5, mas nao por ambos");
    } else {
        printf("Nao atende a condicao");
    }

    return 0;
}