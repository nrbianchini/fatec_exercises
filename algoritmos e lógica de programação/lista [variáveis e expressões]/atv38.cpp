#include <iostream>
#include <math.h>
main (){
	float a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira o salário do funcionário: ");
	scanf("%f",&a);
	b=a+(a*0.25);
	printf("o novo salário é de: R$%.2f \n",b);
	system("pause");
}
