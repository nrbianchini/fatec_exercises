#include <iostream>
#include <math.h>
main (){
	setlocale(LC_ALL,"portuguese");
	float p,a,b,c; 
	printf("insira o valor total do prêmio: ");
	scanf("%f",&p);
	a=p*0.46;
	b=p*0.32;
	c=p*0.22;
	printf("o primeiro ganhador receberá o valor de: %.2f \n",a);
	printf("o segundo ganhador receberá o valor de: %.2f \n",b);
	printf("o terceiro ganhador receberá o valor de: %.2f \n",c);
	system("pause");
}
