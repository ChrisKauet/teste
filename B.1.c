#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "portuguese");
	int number;
	printf("Dgitie um número : \n");
	scanf("%d", &number);
	if (number % 2 == 0){
	
	printf("Esse número é par \n");
}
	else {
		printf("Esse número é impar \n");
	}
	return 0 ;
}
