#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, y, z, opcao;
    float resultado;

    printf("Digite tres numeros inteiros positivos: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Escolha o tipo de media (1-Geometrica, 2-Ponderada, 3-Harmonica, 4-Aritmetica): ");
    scanf("%d", &opcao);

    if (opcao == 1){
        resultado = cbrt(x * y * z);
    } else if (opcao == 2){
        resultado = (x + 2*y + 3*z) / 6.0;
    } else if (opcao == 3){
        resultado = 1.0 / ((1.0/x) + (1.0/y) + (1.0/z));
    } else if (opcao == 4){
        resultado = (x + y + z) / 3.0;
    } else {
        printf("Opcao invalida");
        return 0;
    }

    printf("Resultado: %f", resultado);

    return 0;
}