#include <stdio.h>
int main() {
	int valor, calculo, resultado;
	float disconto;
		disconto = 0.1;
	printf("Digite o valor da compra:\n");
		scanf("%d", &valor);
	if (valor < 0) {
		printf (" O valor deveria ser maior que zero.");
	}
	else {
		calculo = valor * disconto;
		resultado = valor + calculo;
		printf("E o valor original sem desconto era : %d \n", valor);
		printf("o valor com desconto sera : %d \n", resultado );
}
}
	


