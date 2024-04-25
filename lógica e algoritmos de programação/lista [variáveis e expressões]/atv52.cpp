#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
main () {
	float a1,a2,a3,vlr;
	setlocale(LC_ALL,"portuguese");
	printf("valor da aposta amigo 01: ");
	scanf("%f",&a1);
	printf("valor da aposta amigo 02: ");
	scanf("%f",&a2);
	printf("valor da aposta amigo 03: ");
	scanf("%f",&a3);
	
	vlr=a1+a2+a3;
	
	float p;
	printf("insira o valor do prêmio: ");
	scanf("%f",&p);
	
	float p1,p2,p3;
	p1=(a1*100)/vlr;
	p2=(a2*100)/vlr;
	p3=(a3*100)/vlr;
	
	printf("o amigo 01 receberá: R$%.2f \n",p*p1/100);
	printf("o amigo 02 receberá: R$%.2f \n",p*p2/100);
	printf("o amigo 03 receberá: R$%.2f \n",p*p3/100);
	
	return 0;
}
