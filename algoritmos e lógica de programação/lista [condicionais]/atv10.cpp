#include <conio.h>
#include <iostream>
main () {
	float a,p;
	char sexo;
	setlocale(LC_ALL,"portuguese");
	printf("insira sua altura: ");
	scanf("%f",&a);
	printf("insira seu sexo [f] ou [m]: ");
	scanf("%s",&sexo);
	
	if (sexo=='f') {
		p=(62.1*a)-44.7;
		printf("seu peso ideal é %.2f",p);
	}
	else {
		p=(72.7*a)-58;
		printf("seu peso ideal é %.2f",p);	
	}  
	getch();
	}
