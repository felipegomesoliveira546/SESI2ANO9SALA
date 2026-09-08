#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia, mes, ano;
    int valido = 1;

    printf("Digite o dia, o mes e o ano: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes < 1 || mes > 12){
        valido = 0;
    } else if (mes == 2){
        if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
            if (dia < 1 || dia > 29) valido = 0;
        } else {
            if (dia < 1 || dia > 28) valido = 0;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if (dia < 1 || dia > 30) valido = 0;
    } else {
        if (dia < 1 || dia > 31) valido = 0;
    }

    if (valido){
        printf("Data valida");
    } else {
        printf("Data invalida");
    }

    return 0;
}