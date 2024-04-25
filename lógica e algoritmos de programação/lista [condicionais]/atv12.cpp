#include <iostream>
#include <cmath>
main () {
	int a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número inteiro: ");
	scanf("%d",&a);
	
	if (a<0) {
		printf("número inválido");
	}
	else if (a>0) {
		b=log(a);
		printf("o logaritmo é: %d",b);
	}
}
