#include <iostream>
main () {
	int a;
	setlocale(LC_ALL,"portuguese");
	printf("insira o ano com quatro d�gitos: ");
	scanf("%d",&a);
	
	if ((a%400==00) || (a%4==0) && (a%100!=0)) {
		printf("o ano � bissexto");
	}
	else {
		printf("o ano N�O � bissexto");
	}
}
