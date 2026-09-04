#include <stdio.h>
#include <stdlib.h>
int main(){
	int segundosTotais, horas, restoAposHoras, minutos, segundos;
	
	printf("Digite a quantidade de segundos: ");
	scanf("%d", &segundosTotais);
	
	horas = segundosTotais / 3600;
	restoAposHoras = segundosTotais % 3600;
	minutos = restoAposHoras / 60;
	segundos = restoAposHoras % 60;
	
	printf("Horas: %d\n", horas);
	printf("Minutos: %d\n", minutos);
	printf("Segundos: %d\n", segundos);
	
	return 0;
}
