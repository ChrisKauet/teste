#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "portuguese");
	int gol_time, gol_total, porcentagem_gol, conta, a;
	a = 100;
	printf("quantos gols seu time fez? \n");
	scanf("%d", &gol_time);
	printf("Quantos gols teve em todo o campeonato? \n");
	scanf("%d", &gol_total);
	if (gol_tim < 0 or gol_total < 0) {
		printf (" O valor deveria ser maior que zero.");
	}
	else {
	
	porcentagem_gol = gol_time * a;
	conta = porcentagem_gol/gol_total;
	printf("a porcentagem de gol que seu time fez foi: %d %% \n", conta);
}
	return 0;
}

