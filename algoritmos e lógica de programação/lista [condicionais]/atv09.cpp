#include <iostream>
main () {
	float a,b,c;
	setlocale(LC_ALL,"portuguese");
	printf("insira o salário: R$");
	scanf("%f",&a);
	printf("insira o valor da prestação: R$");
	scanf("%f",&b);
	
	if (b>(a*0.20)) {
		printf("empréstimo não concedido");
	}
	else {
		printf("empréstimo concedido");
	}
}
