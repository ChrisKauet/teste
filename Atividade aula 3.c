#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "portuguese");
	float a, b, soma, c; int conta;
	printf("Digite aqui um número: \n");
	scanf("%f", &a);
	printf("Digite aqui outro número: \n");
	scanf("%f", &b);
	printf("Digite aqui qual modelo você quer usar \n 1 - adição \n 2 - subtração \n 3 - divisão \n 4 - multiplicação \n");
	scanf("%d", &conta);
	switch (conta) {
		case 1: {
			c = a + b;
			printf("A soma de %.0f + %.0f é igual a %.0f \n", a, b, c);
			break;
		}
	case 2: {
		c = a - b;
		printf("A subtração de %.0f - %.0f é igual a %.0f \n", a, b, c);
		break;
	}
	case 3: {
		c = a / b;
			printf("A divisão de %.0f / %.0f é igual a %.0f \n", a, b, c);
		break;
	}
	case 4: {
		c = a * b;
			printf("A multiplicação de %.0f x %.0f é igual a %.0f \n", a, b, c);
		break;
	}
	}
	return 0;
}
