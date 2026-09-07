#include <stdio.h>
#include <stdlib.h>

int main(){
    float altura, peso;
    char sexo;

    printf("Digite a altura e o sexo (M/F): ");
    scanf("%f %c", &altura, &sexo);

    if (sexo == 'M' || sexo == 'm'){
        peso = (72.7 * altura) - 58;
    } else {
        peso = (62.1 * altura) - 44.7;
    }

    printf("Peso ideal: %f", peso);

    return 0;
}