#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0, n=0, soma=0;
	
	printf("Digite N: ");
	scanf("%d" ,&n);
	
	for(i=1; i<=n; i++){
		
		soma += i;
		
	}
	printf ("%d\n" ,soma);

	return 0;
}