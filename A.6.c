#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "portuguese");
	int anos;
	float horas, minutos, segundos, conta;
	printf("Digite aqui uma quantidade de anos: \n");
	scanf("%d", &anos);
	if (anos < 0) {
		printf (" O valor deveria ser maior que zero.");
}
	else {
	conta = anos * 2920;
	printf("você jogou xadrez durante %9.0f horas \n", conta);
	conta = anos * 175200;
	printf("você jogou xadrez durante %9.0f minutos \n", conta);
	conta = anos * 10512000;
	printf("você jogou xadrez durante %9.f segundos \n", conta);
}
	return 0;

