#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "portuguese");
	float a, b, c;
	printf("Digite aqui um número: \n");
	scanf ("%f", &a);
	printf("Digite aqui outro número: \n");
	scanf ("%f", &b);
	printf("Digite aqui outro número: \n");
	scanf ("%f", &c);
	if ( a > b and c) {
		printf (" %.0f é o maior número \n ", a);
	}
	if ( b > a and c){
		printf (" %.0f é o maior número \n", b);
	}
	if ( c > a and b) {
		printf (" %.0f é o maior número \n", c);
	}
	return 0;
	}
