#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0, n=0;
	
	printf("Digite N: ");
	scanf("%d" ,&n);
	
	for(i = 0; i<=n; i += 2){
		printf ("%d\n" ,i);
		
	}
	return 0;
}