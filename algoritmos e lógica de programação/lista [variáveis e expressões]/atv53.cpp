#include <iostream>
#include <math.h>
main (){
	float c,l,t,p;
	setlocale(LC_ALL,"portuguese");
	printf("insira as dimens�es de um terreno (comprimento e largura): ");
	scanf("%f %f",&c,&l);
	printf("insira o pre�o do metro de tela: ");
	scanf("%f",&t);
	
	p=c*l*t;
	printf("o custo para cercar este terreno com tela � de: R$%.2f \n",p);
	system("pause");
}
