#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	/* Programa calcula se voc� est� acima da velocidade indicada*/
setlocale(LC_ALL, "portuguese");
		int velocidade;
		float multa;
	printf("Digite aqui sua velocidade atual: \n");
	scanf("%d", &velocidade);
if (velocidade > 80) {
		printf("VOC� FOI MULTADO!!!!!!!!!!!! \n");
		multa = (velocidade - 80) * 5;
		printf(" sua multa ser� de R$%3.2f\n", multa);
}
if (velocidade <= 79) {
		printf("Parab�ns voc� est� abaixo do limite de velocidade pedido.");
}
if (velocidade = 8O) {
	printf("Cuidado voc� est� no limite de velocidade exigido ");
}
return 0;
	}
	
