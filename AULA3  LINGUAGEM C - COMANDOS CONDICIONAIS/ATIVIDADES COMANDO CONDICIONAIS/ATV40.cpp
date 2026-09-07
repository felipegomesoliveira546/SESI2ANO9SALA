#include <stdio.h>
#include <stdlib.h>

int main(){
    float custoFabrica, comissao, impostos, custoConsumidor;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custoFabrica);

    if (custoFabrica <= 12000){
        comissao = custoFabrica * 0.05;
        impostos = 0;
    } else if (custoFabrica <= 25000){
        comissao = custoFabrica * 0.10;
        impostos = custoFabrica * 0.15;
    } else {
        comissao = custoFabrica * 0.15;
        impostos = custoFabrica * 0.20;
    }

    custoConsumidor = custoFabrica + comissao + impostos;
    printf("Custo ao consumidor: %f", custoConsumidor);

    return 0;
}