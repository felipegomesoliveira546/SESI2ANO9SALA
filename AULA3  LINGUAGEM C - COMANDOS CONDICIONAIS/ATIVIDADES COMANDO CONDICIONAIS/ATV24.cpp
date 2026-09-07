#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float valor, precoFinal;
    char estado[3];

    printf("Digite o valor e o estado (MG, SP, RJ, MS): ");
    scanf("%f %s", &valor, estado);

    if (strcmp(estado, "MG") == 0){
        precoFinal = valor + (valor * 0.07);
    } else if (strcmp(estado, "SP") == 0){
        precoFinal = valor + (valor * 0.12);
    } else if (strcmp(estado, "RJ") == 0){
        precoFinal = valor + (valor * 0.15);
    } else if (strcmp(estado, "MS") == 0){
        precoFinal = valor + (valor * 0.08);
    } else {
        printf("Estado invalido");
        return 0;
    }

    printf("Preco final: %f", precoFinal);

    return 0;
}