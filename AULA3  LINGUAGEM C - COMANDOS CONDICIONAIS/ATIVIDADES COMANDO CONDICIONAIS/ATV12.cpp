#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int numero;
    float resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0){
        printf("Numero invalido");
    } else {
        resultado = log(numero);
        printf("Logaritmo: %f", resultado);
    }

    return 0;
}