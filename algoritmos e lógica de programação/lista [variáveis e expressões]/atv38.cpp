#include <iostream>
#include <math.h>
main (){
	float a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira o sal�rio do funcion�rio: ");
	scanf("%f",&a);
	b=a+(a*0.25);
	printf("o novo sal�rio � de: R$%.2f \n",b);
	system("pause");
}
