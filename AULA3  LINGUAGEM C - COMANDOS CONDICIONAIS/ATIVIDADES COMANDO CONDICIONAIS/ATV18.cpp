#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    float num1, num2, resultado;

    printf("Menu de operacoes:\n");
    printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite dois valores: ");
    scanf("%f %f", &num1, &num2);

    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %f", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %f", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %f", resultado);
            break;
        case 4:
            if (num2 != 0){
                resultado = num1 / num2;
                printf("Resultado: %f", resultado);
            } else {
                printf("Erro: divisao por zero");
            }
            break;
        default:
            printf("Opcao invalida");
    }

    return 0;
}