#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "portuguese");
	int number;
	printf("Dgitie um n�mero : \n");
	scanf("%d", &number);
	if (number % 2 == 0){
	
	printf("Esse n�mero � par \n");
}
	else {
		printf("Esse n�mero � impar \n");
	}
	return 0 ;
}
