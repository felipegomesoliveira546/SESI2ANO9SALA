#include <stdio.h>
#include <stdlib.h>

int main(){

    float numero1, numero2;

    printf("Digite dois numeros: ");

    scanf("%f %f", &numero1, &numero2);

    if (numero1 > numero2){
        printf("Numero maior: %f", numero1);
    } else {
        printf("Numero maior: %f", numero2);
    }

    return 0;
}