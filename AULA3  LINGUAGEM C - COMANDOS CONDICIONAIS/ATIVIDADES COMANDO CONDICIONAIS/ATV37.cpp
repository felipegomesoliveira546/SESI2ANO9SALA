#include <stdio.h>
#include <stdlib.h>

int main(){
    int horaChegada, minChegada, horaPartida, minPartida;
    int totalMinChegada, totalMinPartida, minutosEstacionado;
    int horas, i;
    float preco = 0;

    printf("Digite a hora e o minuto de chegada: ");
    scanf("%d %d", &horaChegada, &minChegada);

    printf("Digite a hora e o minuto de partida: ");
    scanf("%d %d", &horaPartida, &minPartida);

    totalMinChegada = horaChegada * 60 + minChegada;
    totalMinPartida = horaPartida * 60 + minPartida;

    if (totalMinPartida < totalMinChegada){
        totalMinPartida = totalMinPartida + 24*60;
    }

    minutosEstacionado = totalMinPartida - totalMinChegada;

    horas = minutosEstacionado / 60;
    if (minutosEstacionado % 60 != 0){
        horas = horas + 1;
    }

    for (i = 1; i <= horas; i++){
        if (i <= 2){
            preco = preco + 1.00;
        } else if (i <= 4){
            preco = preco + 1.40;
        } else {
            preco = preco + 2.00;
        }
    }

    printf("Preco cobrado: %f", preco);

    return 0;
}