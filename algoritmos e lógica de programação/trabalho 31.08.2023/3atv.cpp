#include <iostream>
#include <math.h>
main (){
	setlocale(LC_ALL,"portuguese");
	float p,a,b,c; 
	printf("insira o valor total do pr�mio: ");
	scanf("%f",&p);
	a=p*0.46;
	b=p*0.32;
	c=p*0.22;
	printf("o primeiro ganhador receber� o valor de: %.2f \n",a);
	printf("o segundo ganhador receber� o valor de: %.2f \n",b);
	printf("o terceiro ganhador receber� o valor de: %.2f \n",c);
	system("pause");
}
