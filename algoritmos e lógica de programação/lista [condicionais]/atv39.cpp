#include <iostream>
main () {
	float a,b,c;
	setlocale(LC_ALL,"portuguese");
	printf("insira o atual valor do salário: ");
	scanf("%f",&a);
	printf("insira o tempo de serviço em anos: ");
	scanf("%f",&b);
	
	if (a<=500 && b<1) {
	c=a+(a*0.25);
	printf("o salário reajustado é no valor de: R$%.2f",c);
	}
	else if (a<=1000 && b<=3) {	
	c=a+(a*0.20)+100;
	printf("o salário reajustado é no valor de: R$%.2f",c);	
	}
	else if (a<=1500 && b<=6) {	
	c=a+(a*0.15)+200;
	printf("o salário reajustado é no valor de: R$%.2f",c);	
	}
	else if (a<=2000 && b<=10) {	
	c=a+(a*0.10)+300;
	printf("o salário reajustado é no valor de: R$%.2f",c);	
	}
	else {	
	c=a+500;
	printf("o salário reajustado é no valor de: R$%.2f",c);	
	}
	return 0;
}

