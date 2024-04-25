#include <iostream>
#include <math.h>
main (){
	float v,h,a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira o valor da hora de trabalho: ");
	scanf("%f",&v);
	printf("insira o número de horas trabalhadas: ");
	scanf("%f",&h);
	
	a=h*v;
	b=a+(a*0.10);
	
	printf("o valor a ser pago ao funcionário é: R$%.2f \n",b);
	system("pause");
}
