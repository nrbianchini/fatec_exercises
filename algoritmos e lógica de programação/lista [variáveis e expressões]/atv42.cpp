#include <iostream>
#include <math.h>
main (){
	float a,b,c,d;
	setlocale(LC_ALL,"portuguese");
	printf("insira o salário-base: R$");
	scanf("%f",&a);
	
	b=a*0.05;
	c=a*0.07;
	d=(a+b)-c;
	
	printf("o salário a receber é de: R$%.2f \n",d);
	system("pause");
}
