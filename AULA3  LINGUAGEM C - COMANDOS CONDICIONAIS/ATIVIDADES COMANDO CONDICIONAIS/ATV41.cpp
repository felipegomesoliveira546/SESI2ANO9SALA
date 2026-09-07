#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso, altura, imc;

    printf("Digite o peso e a altura: ");
    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5){
        printf("Abaixo do peso");
    } else if (imc <= 24.9){
        printf("Saudavel");
    } else if (imc <= 29.9){
        printf("Peso em excesso");
    } else if (imc <= 34.9){
        printf("Obesidade Grau I");
    } else if (imc <= 39.9){
        printf("Obesidade Grau II (severa)");
    } else {
        printf("Obesidade Grau III (morbida)");
    }

    return 0;
}