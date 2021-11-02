#include <stdio.h>
#include <locale.h>
int main () {
	/* convertidor de graus celcius em fahrenheit */
	setlocale(LC_ALL, "portuguese");
	float celcius, f, conta;
	printf("Digite aqui a temperatura atual em graus Celcius:");
	scanf("%f", &celcius);
	conta = 9*celcius/5 + 32;
	f = conta;
	printf("o resutado em graus fahrenheit é %2.1f \n", f);
	return 0;
}
