#include <iostream>
main () {
	float a,b,c;
	setlocale(LC_ALL,"portuguese");
	printf("insira duas notas: ");
	scanf("%f %f",&a,&b);
	
	if (a<0 || a>10 || b<0 || b>10) {
		printf("nota com valor inválido");
	}
	else {
		c=(a+b)/2;
		printf("a média destas notas é %.2f",c);
	}
}
