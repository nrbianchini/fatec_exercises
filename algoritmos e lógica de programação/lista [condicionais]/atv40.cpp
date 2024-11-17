#include <iostream>
#include <math.h>
main (){
	float a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira o custo de fábrica em reais: ");
	scanf("%f",&a);
	
	if (a<=12.000) {
	b=a+(a*0.05);
	printf("o custo ao consumidor será de: R$%.2f",b);
	}
	else if (a<=25.000) {
	b=a+(a*0.10)+(a*0.15);
	printf("o custo ao consumidor será de: R$%.2f",b);
	}
	else {
	b=a+(a*0.15)+(a*0.20);
	printf("o custo ao consumidor será de: R$%.2f",b);
	}
	return 0;
}
