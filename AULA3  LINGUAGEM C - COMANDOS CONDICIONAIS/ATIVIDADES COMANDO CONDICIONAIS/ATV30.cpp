#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c, menor, meio, maior;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= b && a <= c){
        menor = a;
        if (b <= c){ meio = b; maior = c; }
        else { meio = c; maior = b; }
    } else if (b <= a && b <= c){
        menor = b;
        if (a <= c){ meio = a; maior = c; }
        else { meio = c; maior = a; }
    } else {
        menor = c;
        if (a <= b){ meio = a; maior = b; }
        else { meio = b; maior = a; }
    }

    printf("Ordem crescente: %.2f, %.2f, %.2f", menor, meio, maior);

    return 0;
}