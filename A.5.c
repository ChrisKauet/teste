#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	/* programa que receba um número racional, calcule e imprima o teto desse
número.*/
setlocale(LC_ALL, "portuguese");
float numero, conta;
printf("Digite aqui qualquer numero racional: \n");
scanf ("%f", &numero);
conta = ceil(numero);
printf("%3.1 \n", conta);
return 0
}
