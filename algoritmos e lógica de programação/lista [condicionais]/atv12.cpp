#include <iostream>
#include <cmath>
main () {
	int a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira um n�mero inteiro: ");
	scanf("%d",&a);
	
	if (a<0) {
		printf("n�mero inv�lido");
	}
	else if (a>0) {
		b=log(a);
		printf("o logaritmo �: %d",b);
	}
}
