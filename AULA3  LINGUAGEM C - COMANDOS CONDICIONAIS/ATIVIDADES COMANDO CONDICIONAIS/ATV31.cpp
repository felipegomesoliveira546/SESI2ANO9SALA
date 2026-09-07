#include <stdio.h>
#include <stdlib.h>

int main(){
    float altura, peso;
    char classificacao;

    printf("Digite a altura e o peso: ");
    scanf("%f %f", &altura, &peso);

    if (altura < 1.20){
        if (peso <= 60) classificacao = 'A';
        else if (peso <= 90) classificacao = 'D';
        else classificacao = 'G';
    } else if (altura <= 1.70){
        if (peso <= 60) classificacao = 'B';
        else if (peso <= 90) classificacao = 'E';
        else classificacao = 'H';
    } else {
        if (peso <= 60) classificacao = 'C';
        else if (peso <= 90) classificacao = 'F';
        else classificacao = 'I';
    }

    printf("Classificacao: %c", classificacao);

    return 0;
}