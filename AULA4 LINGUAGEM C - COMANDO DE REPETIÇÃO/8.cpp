#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, valor, menor, maior;

    scanf("%d", &valor);
    menor = valor;
    maior = valor;

    for (i = 2; i <= 10; i++) {
        scanf("%d", &valor);
        
        if(valor<menor){
        	menor = valor;
		}
		if(valor>maior){
        	maior = valor;
		}
    }

    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);

    return 0;
}