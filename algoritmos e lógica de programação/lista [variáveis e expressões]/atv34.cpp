#include <iostream>
#include <math.h>
main (){
	float r,a;
	setlocale(LC_ALL,"portuguese");
	printf("insira o valor do raio de um c�rculo: ");
	scanf("%f",&r);
	a=M_PI*pow(r,2);
	printf("a �rea do c�rculo �: %.2f \n",a);
	system("pause");
}
