#include <iostream>
main (){
	float a,b,c,d;
	setlocale(LC_ALL,"portuguese");
	printf("insira a import�ncia do pr�mio: R$");
	scanf("%f",&a);
	
	b=a*0.46;
	printf("o primeiro ganhador ir� receber: R$%.2f \n",b);
	c=a*0.32;
	printf("o segundo ganhador ir� receber: R$%.2f \n",c);
	d=a*0.22;
	printf("o terceiro ganhador ir� receber: R$%.2f \n",d);
	system("pause");
}
