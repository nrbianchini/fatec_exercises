#include <iostream>
int main () {
	int num,a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira um n�mero inteiro: ");
	scanf("%d",&num);
	
	a=(num%5==0);
	b=(num%3==0);
	
	if (a && b) {
		printf("o n�mero � divis�vel por 3 e 5");
	}
	else if (b && !a) {
		printf("o n�mero � divis�vel por 3, mas n�o por 5");
	}
	else if (a && !b) {
		printf("o n�mero � divis�vel por 5, mas n�o por 3");
	}
	else if ((!b && a) || (b && !a)) {
		printf(" o n�mero � divis�vel por 3 ou 5");
	}
}
