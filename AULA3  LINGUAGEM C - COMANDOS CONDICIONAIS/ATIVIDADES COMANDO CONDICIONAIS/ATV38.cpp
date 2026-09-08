#include <stdio.h>
#include <stdlib.h>

#define ANO_ATUAL 2008

int main(){
    int dia, mes, ano;
    int diaValido = 1, mesValido, anoValido;

    printf("Digite o dia, o mes e o ano de nascimento: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    mesValido = (mes > 0 && mes < 13);

    if (dia <= 0){
        diaValido = 0;
    } else if (mes == 2){
        if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
            diaValido = (dia <= 29);
        } else {
            diaValido = (dia <= 28);
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        diaValido = (dia <= 30);
    } else if (mesValido){
        diaValido = (dia <= 31);
    }

    anoValido = (ano <= ANO_ATUAL);

    if (diaValido && mesValido && anoValido){
        printf("Data valida");
    } else {
        printf("Data invalida");
    }

    return 0;
}