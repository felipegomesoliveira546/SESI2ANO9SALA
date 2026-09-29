#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0, n=0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("%d\n", 2 * i - 1);
    }

    return 0;
}