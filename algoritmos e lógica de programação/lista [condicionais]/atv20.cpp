#include <iostream>
int main () {
	float a,b,c;
	setlocale(LC_ALL,"portuguese");
	printf("insira o valor de A: ");
	scanf("%f",&a);
	printf("insira o valor de B: ");
	scanf("%f",&b);
	printf("insira o valor de C: ");
	scanf("%f",&c);
	
	if ((a && b && c) > a+b+c) {
		printf("os v�lores dados s�o INV�LIDOS como lados de um tri�ngulo");
	}
	else if (a == b && a == c) {
		printf("o tri�ngulo � equil�tero");
	}
	else if (a==b || b==c || (a==c)) {
		printf("o tri�ngulo � is�sceles");
	}
	else {
		printf("o tri�ngulo � escaleno");
	}
}
