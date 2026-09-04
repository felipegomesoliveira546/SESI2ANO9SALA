#include <stdio.h>
#include <stdlib.h>
int main(){
	int hora, minuto, segundo, duracao;
	int totalSegundos, novaHora, resto, novoMinuto, novoSegundo;
	
	printf("Digite hora, minuto e segundo de inicio: ");
	scanf("%d %d %d", &hora, &minuto, &segundo);
	
	printf("Digite a duracao em segundos: ");
	scanf("%d", &duracao);
	
	totalSegundos = (hora * 3600) + (minuto * 60) + segundo + duracao;
	
	novaHora = (totalSegundos / 3600) % 24;
	resto = totalSegundos % 3600;
	novoMinuto = resto / 60;
	novoSegundo = resto % 60;
	
	printf("Horario de termino: %d:%d:%d\n", novaHora, novoMinuto, novoSegundo);
	
	return 0;
}