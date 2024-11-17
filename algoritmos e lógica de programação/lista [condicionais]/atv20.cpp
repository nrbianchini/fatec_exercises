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
		printf("os válores dados são INVÁLIDOS como lados de um triângulo");
	}
	else if (a == b && a == c) {
		printf("o triângulo é equilátero");
	}
	else if (a==b || b==c || (a==c)) {
		printf("o triângulo é isósceles");
	}
	else {
		printf("o triângulo é escaleno");
	}
}
