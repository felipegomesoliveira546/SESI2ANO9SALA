#include <stdio.h>
#include <stdlib.h>

int main(){
    float baseMaior, baseMenor, altura, area;

    printf("Digite a base maior, a base menor e a altura: ");
    scanf("%f %f %f", &baseMaior, &baseMenor, &altura);

    if (baseMaior > 0 && baseMenor > 0){
        area = ((baseMaior + baseMenor) * altura) / 2;
        printf("Area do trapezio: %f", area);
    } else {
        printf("Valores invalidos");
    }

    return 0;
}