#include <iostream>
#include <math.h>
main(){
	float r,c,d;
	setlocale(LC_ALL,"portuguese");
	printf("insira o valor em reais: ");
	scanf("%f",&r);
	printf("insira a cotação do dólar: ");
	scanf("%f",&c);
	d=r/c;
	printf("a conversão deste valor em dólares é: %.2f \n",d);
	system("pause");
}
