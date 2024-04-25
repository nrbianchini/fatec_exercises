#include <iostream>
#include <math.h>
main () {
	float a,rq;
	int q;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número: ");
	scanf("%f",&a);
	
	if (a>0) {
	rq=sqrt(a);
	    printf("a raiz quadrada deste número é %.2f",rq);
	}
	
	else {
	q=pow(a,2);
		printf("este número ao quadrado é %d",q);
	}
}
