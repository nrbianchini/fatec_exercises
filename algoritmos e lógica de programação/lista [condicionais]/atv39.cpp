#include <iostream>
main () {
	float a,b,c;
	setlocale(LC_ALL,"portuguese");
	printf("insira o atual valor do sal�rio: ");
	scanf("%f",&a);
	printf("insira o tempo de servi�o em anos: ");
	scanf("%f",&b);
	
	if (a<=500 && b<1) {
	c=a+(a*0.25);
	printf("o sal�rio reajustado � no valor de: R$%.2f",c);
	}
	else if (a<=1000 && b<=3) {	
	c=a+(a*0.20)+100;
	printf("o sal�rio reajustado � no valor de: R$%.2f",c);	
	}
	else if (a<=1500 && b<=6) {	
	c=a+(a*0.15)+200;
	printf("o sal�rio reajustado � no valor de: R$%.2f",c);	
	}
	else if (a<=2000 && b<=10) {	
	c=a+(a*0.10)+300;
	printf("o sal�rio reajustado � no valor de: R$%.2f",c);	
	}
	else {	
	c=a+500;
	printf("o sal�rio reajustado � no valor de: R$%.2f",c);	
	}
	return 0;
}

