#include <iostream>
#include <math.h>
main () {
	float a;
	int q,rq;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número: ");
	scanf("%f",&a);
	
	if (a>0) {
	q=pow(a,2);
		printf("este número ao quadrado é %d \n",q);
	rq=sqrt(a);
	    printf("a raiz quadrada deste número é %d",rq);
	}
	
	else {
		printf("este número é inválido");
	}
}
