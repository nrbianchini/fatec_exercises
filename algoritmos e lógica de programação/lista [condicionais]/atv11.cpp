#include <iostream>
#include <math.h>
main () {
	int a,c,d,e,f;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número inteiro: ");
	scanf("%d",&a);
	
	if (a>0) {
		c=a/100;
		d=a%100/10;
		e=a%100%10;
		f=c+d+e;
		printf("a soma de seus algarismos é %d",f);
	}
	else if (a<0) {
		printf("número inválido");
	}
}
