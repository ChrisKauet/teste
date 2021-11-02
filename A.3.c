#include <stdio.h>
#include <locale.h>
int main() {
	/* Programa que calcula quanto a pessoa paga no aluguel do carro*/
	setlocale(LC_ALL, "portuguese");
	int dias, km;
	float conta, resultado;
	printf("Digite quantos dias você pretende ficar com o carro: \n");
	scanf("%d", &dias);
	printf("Digite quantos km você pretende rodar: \n");
	scanf("%d", &km);
	if (dias < 0 or km < 0) {
		printf (" O valor deveria ser maior que zero.");
	}
	else {
	conta = km*0.09 + dias*80;
	printf("O total a pagar é: R$%4.2f", conta);
}
}
