#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "portuguese");
	int a, b, c, delta, delta_conta, xu, xd, da, raiz, tres;
	printf("Digite aqui o valor de a: \n");
		scanf("%d", &a);
	printf("Digite aqui o valor de b: \n");
		scanf("%d", &b);
	printf("Digite aqui o valor de c: \n");
		scanf("%d", &c);
	printf("%d \n", delta);	b = b* -1;
	delta_conta = b*b - 4*a*c;
		printf("%d \n", delta_conta);
	raiz = sqrt(delta_conta);
	da = 2*a;
	xu = -b + sqrt(delta_conta) / da;
		printf("o x1 será: %d \n", xu);
	b = b - raiz;
	xd = b / da;
		printf("o x2 será: %d \n", xd);
	return 0;
}
