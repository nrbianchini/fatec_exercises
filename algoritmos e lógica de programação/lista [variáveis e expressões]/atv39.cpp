#include <iostream>
main (){
	float a,b,c,d;
	setlocale(LC_ALL,"portuguese");
	printf("insira a importância do prêmio: R$");
	scanf("%f",&a);
	
	b=a*0.46;
	printf("o primeiro ganhador irá receber: R$%.2f \n",b);
	c=a*0.32;
	printf("o segundo ganhador irá receber: R$%.2f \n",c);
	d=a*0.22;
	printf("o terceiro ganhador irá receber: R$%.2f \n",d);
	system("pause");
}
