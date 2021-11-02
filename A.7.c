#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "portuguese");
	float cato, hip,cata, conta; 
	printf("Digite aqui o valor de um dos catetos: \n");
	scanf("%f", &cato);
	printf("Digite aqui o valor da hipotenusa: \n");
	scanf("%f", &hip);
	cato = pow(cato, 2);
	hip = pow(hip, 2);
	printf("%.0f \n", cato);
	printf("%.0f \n", hip);
	conta = hip - cato;
	printf("%.0f \n", conta);
	conta = sqrt(conta);
	printf("%.2f", conta);
	return 0;
}
