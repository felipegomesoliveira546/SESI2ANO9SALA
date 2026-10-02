#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, soma;
	
	for(i=1; i<=50; i++){
		soma+= 2 * i;
	}
	
	printf("%d\n" ,soma);
	return 0;
}