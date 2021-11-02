#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "portuguese");
	int a , b;
	printf("Digite um número : \n");
	scanf("%d", &a);
	printf("Digite um número : \n");
	scanf("%d", &b);
	if ( a > b and a % b == 0 or a == b) {
	printf(" %d é divisivel por %d \n", a, b);
}
else {
	printf(" %d não é divisivel por %d \n", a, b);
	}
	return 0;
}


