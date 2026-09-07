#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, salarioReajustado, reajuste, bonus;
    int tempoServico;

    printf("Digite o salario atual e o tempo de servico: ");
    scanf("%f %d", &salario, &tempoServico);

    if (salario <= 500) reajuste = 0.25;
    else if (salario <= 1000) reajuste = 0.20;
    else if (salario <= 1500) reajuste = 0.15;
    else if (salario <= 2000) reajuste = 0.20;
    else reajuste = 0;

    if (tempoServico < 1) bonus = 0;
    else if (tempoServico <= 3) bonus = 100;
    else if (tempoServico <= 6) bonus = 200;
    else if (tempoServico <= 10) bonus = 300;
    else bonus = 500;

    if (reajuste == 0 && bonus == 0){
        printf("Funcionario nao tem direito a nenhum aumento");
    } else {
        salarioReajustado = salario + (salario * reajuste) + bonus;
        printf("Salario reajustado: %f", salarioReajustado);
    }

    return 0;
}