#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "portuguese");
	float a, b, soma, c; int conta;
	printf("Digite aqui um n�mero: \n");
	scanf("%f", &a);
	printf("Digite aqui outro n�mero: \n");
	scanf("%f", &b);
	printf("Digite aqui qual modelo voc� quer usar \n 1 - adi��o \n 2 - subtra��o \n 3 - divis�o \n 4 - multiplica��o \n");
	scanf("%d", &conta);
	switch (conta) {
		case 1: {
			c = a + b;
			printf("A soma de %.0f + %.0f � igual a %.0f \n", a, b, c);
			break;
		}
	case 2: {
		c = a - b;
		printf("A subtra��o de %.0f - %.0f � igual a %.0f \n", a, b, c);
		break;
	}
	case 3: {
		c = a / b;
			printf("A divis�o de %.0f / %.0f � igual a %.0f \n", a, b, c);
		break;
	}
	case 4: {
		c = a * b;
			printf("A multiplica��o de %.0f x %.0f � igual a %.0f \n", a, b, c);
		break;
	}
	}
	return 0;
}
