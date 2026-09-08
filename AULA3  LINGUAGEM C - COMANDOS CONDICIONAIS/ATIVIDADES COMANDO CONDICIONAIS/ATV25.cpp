#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0){
        printf("Nao e equacao de segundo grau");
    } else {
        delta = (b*b) - (4*a*c);

        if (delta < 0){
            printf("Nao existe raiz");
        } else if (delta == 0){
            x1 = -b / (2*a);
            printf("Raiz unica: %f", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("Raiz 1: %f\n", x1);
            printf("Raiz 2: %f", x2);
        }
    }

    return 0;
}