#include <iostream>
int main () {
	int num,a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número inteiro: ");
	scanf("%d",&num);
	
	a=(num%5==0);
	b=(num%3==0);
	
	if (a && b) {
		printf("o número é divisível por 3 e 5");
	}
	else if (b && !a) {
		printf("o número é divisível por 3, mas não por 5");
	}
	else if (a && !b) {
		printf("o número é divisível por 5, mas não por 3");
	}
	else if ((!b && a) || (b && !a)) {
		printf(" o número é divisível por 3 ou 5");
	}
}
