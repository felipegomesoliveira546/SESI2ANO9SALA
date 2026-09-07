#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade, tempoServico;

    printf("Digite a idade e o tempo de servico: ");
    scanf("%d %d", &idade, &tempoServico);

    if (idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25)){
        printf("Pode se aposentar");
    } else {
        printf("Nao pode se aposentar");
    }

    return 0;
}