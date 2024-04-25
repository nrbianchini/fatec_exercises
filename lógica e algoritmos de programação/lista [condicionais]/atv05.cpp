#include <iostream>
#include <math.h>
main () {
	int a;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número: ");
	scanf("%d",&a);
	
	if (a%2==0) {
	    printf("este número é par");
	}
	
	else {
		printf("este número é ímpar");
	}
}
