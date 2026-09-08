#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, soma = 0, digito;

    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &numero);

    if (numero > 0){
        while (numero > 0){
            digito = numero % 10;
            soma = soma + digito;
            numero = numero / 10;
        }
        printf("Soma dos algarismos: %d", soma);
    } else {
        printf("Numero invalido");
    }

    return 0;
}