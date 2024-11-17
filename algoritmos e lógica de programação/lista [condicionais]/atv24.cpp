#include <conio.h>
#include <iostream>
main () {
	float a,p,pf,estado,ms,rg,sp,rj;
	setlocale(LC_ALL,"portuguese");
	printf("insira o valor do produto: ");
	scanf("%f",&a);
	printf("insira seu estado: ");
	scanf("%f",&estado);
	
	if (estado=='MG') {
		pf=p=(p*0.07);
		printf("o preço final do produto é R$%.2f",pf);
	}
  	else if (estado=='SP') {
		pf=p=(p*0.12);
		printf("o preço final do produto é R$%.2f",pf);
	}
	else if (estado=='RJ') {
		pf=p=(p*0.15);
		printf("o preço final do produto é R$%.2f",pf);
	}
	else if (estado=='MS') {
		pf=p=(p*0.08);
		printf("o preço final do produto é R$%.2f",pf);
	}
	else {
		printf("o estado não é válido");
	}
	getch();
	}
