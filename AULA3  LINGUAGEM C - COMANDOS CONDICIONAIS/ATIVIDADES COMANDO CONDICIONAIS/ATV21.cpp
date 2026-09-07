#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    float num1, num2;

    printf("Escolha a opcao:\n");
    printf("1 - Soma de 2 numeros.\n");
    printf("2 - Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3 - Produto entre 2 numeros.\n");
    printf("4 - Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        printf("Resultado: %f", num1 + num2);
    } else if (opcao == 2){
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        if (num1 > num2){
            printf("Resultado: %f", num1 - num2);
        } else {
            printf("Resultado: %f", num2 - num1);
        }
    } else if (opcao == 3){
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        printf("Resultado: %f", num1 * num2);
    } else if (opcao == 4){
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        if (num2 != 0){
            printf("Resultado: %f", num1 / num2);
        } else {
            printf("Erro: denominador nao pode ser zero");
        }
    } else {
        printf("Opcao invalida");
    }

    return 0;
}