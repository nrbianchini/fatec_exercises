#include <iostream>
#include <math.h>
main(){
	float r,c,d;
	setlocale(LC_ALL,"portuguese");
	printf("insira o valor em reais: ");
	scanf("%f",&r);
	printf("insira a cota��o do d�lar: ");
	scanf("%f",&c);
	d=r/c;
	printf("a convers�o deste valor em d�lares �: %.2f \n",d);
	system("pause");
}
