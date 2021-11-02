#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale (LC_ALL, "Portuguese");
	float peso, altura, imc;
	printf(" ------------> Digite aqui seu peso: \n ");
	scanf("%f", &peso);
	printf("------------> Digite aqui sua altura : \n");
	scanf("%f", &altura);
	imc = peso / (altura * altura);
	if ( imc <= 16.99) {
		printf("A não! Você precisa se cuidar melhor, você está muito a baixo do peso \n");
		printf("seu imc é %.2f \n", imc);
	}
	else if ( imc >= 17 && imc <= 18.49){
		printf("Cuidado!! Voc� est� abaixo do peso. \n");
		printf("seu imc é %.2f \n", imc);	
	}
	else if ( imc >= 18.50 && imc <= 24.99) {
		printf("Muito bem !! Voc� est� com o peso normal. \n");
		printf("seu imc é %.2f \n", imc);
	}
	else if ( imc >= 25 && imc <= 29.99) {
		printf("a n�o,  Voc� est� com sobrepeso. \n");
		printf("seu imc é %.2f \n", imc);
	}
	else if( imc >= 30 && imc <= 34.99) {
		printf("Infelizmente você está obesidade grau I. \n");
		printf("seu imc é %.2f \n", imc);
	}
	else if ( imc >= 35 && imc <= 39.99) {
		printf("Infelizmente você está com obesidade grau II. \n");
		printf("seu imc é %.2f \n", imc);
	}
	else if (imc >= 40) {
		printf("Infelizmente você está com obesidade grau III. \n");
		printf("seu imc é %.2f \n", imc);
	}
	return 0;
}
