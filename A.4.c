#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	/* Programa que potencializa um número*/
	setlocale(LC_ALL, "portuguese");
	int numero, pd, pc, pn, pdd;
	printf("Digite o número que deseja potencializar: \n");
	scanf("%d", &numero);
	pd = pow(numero, 2);
	pc = pow(numero, 5);
	pn = pow(numero, 9);
	pdd = pow(numero, 10);
	printf("elevado a 2 :%d \n", pd);
	printf("elevado a 5 :%d\n", pc);
	printf("elevado a 9 :%d\n", pn);
	printf("elevado a 10 :%d\n", pdd);
	return 0;
}
