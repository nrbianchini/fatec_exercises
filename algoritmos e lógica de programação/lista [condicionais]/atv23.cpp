#include <iostream>
main () {
	int a;
	setlocale(LC_ALL,"portuguese");
	printf("insira o ano com quatro dígitos: ");
	scanf("%d",&a);
	
	if ((a%400==00) || (a%4==0) && (a%100!=0)) {
		printf("o ano É bissexto");
	}
	else {
		printf("o ano NÃO é bissexto");
	}
}
