#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota e o numero de faltas: ");
    scanf("%f %d", &nota, &faltas);

    if (nota >= 9.0){
        if (faltas <= 20) conceito = 'A';
        else conceito = 'B';
    } else if (nota >= 7.5){
        if (faltas <= 20) conceito = 'B';
        else conceito = 'C';
    } else if (nota >= 5.0){
        if (faltas <= 20) conceito = 'C';
        else conceito = 'D';
    } else if (nota >= 4.0){
        if (faltas <= 20) conceito = 'D';
        else conceito = 'E';
    } else {
        conceito = 'E';
    }

    printf("Conceito: %c", conceito);

    return 0;
}