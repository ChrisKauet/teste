#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "portuguese");
	float a, b, c;
	printf("Digite aqui um n�mero: \n");
	scanf ("%f", &a);
	printf("Digite aqui outro n�mero: \n");
	scanf ("%f", &b);
	printf("Digite aqui outro n�mero: \n");
	scanf ("%f", &c);
	if ( a > b and c) {
		printf (" %.0f � o maior n�mero \n ", a);
	}
	if ( b > a and c){
		printf (" %.0f � o maior n�mero \n", b);
	}
	if ( c > a and b) {
		printf (" %.0f � o maior n�mero \n", c);
	}
	return 0;
	}
