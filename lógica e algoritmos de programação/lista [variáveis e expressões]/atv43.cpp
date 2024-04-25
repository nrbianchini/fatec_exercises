#include <iostream>
#include <math.h>
main (){
	float a,b,c,d,e,f,g;
	setlocale(LC_ALL,"portuguese");
	printf("insira o valor do produto: ");
	scanf("%f",&a);
	
	b=a-(a*0.10);
	printf("o total a pagar, com desconto de 10% é de: R$%.2f \n",b);
	
	c=a/3;
	printf("o valor das parcelas, em 3x sem juros é de: R$%.2f \n",c);
	
	d=b*0.05;
	printf("a comissão, em venda à vista é de: R$%.2f \n",d);
	
	e=a*0.05;
	printf("a comissão, em venda parcelada é de: R$%.2f \n",e);
	
	system("pause");
}
