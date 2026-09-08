#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b){
        if (a == b && b == c){
            printf("Triangulo equilatero");
        } else if (a == b || a == c || b == c){
            printf("Triangulo isosceles");
        } else {
            printf("Triangulo escaleno");
        }
    } else {
        printf("Os valores nao formam um triangulo");
    }

    return 0;
}