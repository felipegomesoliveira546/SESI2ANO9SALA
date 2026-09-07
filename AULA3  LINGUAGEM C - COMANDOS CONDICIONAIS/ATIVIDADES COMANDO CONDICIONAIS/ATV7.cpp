#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero1, numero2, iguais;
	
	printf("Digite dois numeros: ");
	scanf ("%d %d" , &numero1, &numero2);
	
	
	if (numero1 > numero2){
    printf("Numero maior: %d", numero1);
    } else if (numero1 < numero2){
    printf("Numero maior: %d", numero2);
    } else {
    printf("Numeros iguais");
    }

return 0;
}