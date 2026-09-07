#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero1, numero2, diferenca;
	
	printf("Digite dois numeros: ");
	scanf ("%d %d" , &numero1, &numero2);
	
	diferenca = numero1 - numero2;
	
	if (numero1 > numero2){
		printf ("Numero maior: %d" ,numero1);
		printf(" |A diferenca: %d" ,diferenca);
	}else{
		diferenca = numero2 - numero1;
		printf ("Numero maior %d" ,numero2);
		printf(" |A diferenca: %d" ,diferenca);
	}
	
	return 0;
}