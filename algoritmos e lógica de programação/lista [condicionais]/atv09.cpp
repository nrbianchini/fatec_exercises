#include <iostream>
main () {
	float a,b,c;
	setlocale(LC_ALL,"portuguese");
	printf("insira o sal�rio: R$");
	scanf("%f",&a);
	printf("insira o valor da presta��o: R$");
	scanf("%f",&b);
	
	if (b>(a*0.20)) {
		printf("empr�stimo n�o concedido");
	}
	else {
		printf("empr�stimo concedido");
	}
}
