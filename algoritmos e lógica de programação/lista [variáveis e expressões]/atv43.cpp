#include <iostream>
#include <math.h>
main (){
	float a,b,c,d,e,f,g;
	setlocale(LC_ALL,"portuguese");
	printf("insira o valor do produto: ");
	scanf("%f",&a);
	
	b=a-(a*0.10);
	printf("o total a pagar, com desconto de 10% � de: R$%.2f \n",b);
	
	c=a/3;
	printf("o valor das parcelas, em 3x sem juros � de: R$%.2f \n",c);
	
	d=b*0.05;
	printf("a comiss�o, em venda � vista � de: R$%.2f \n",d);
	
	e=a*0.05;
	printf("a comiss�o, em venda parcelada � de: R$%.2f \n",e);
	
	system("pause");
}
