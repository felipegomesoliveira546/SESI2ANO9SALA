#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, prestacao;

    printf("Digite o salario e a prestacao: ");
    scanf("%f %f", &salario, &prestacao);

    if (prestacao > 0.2 * salario){
        printf("Emprestimo nao concedido");
    } else {
        printf("Emprestimo concedido");
    }

    return 0;
}