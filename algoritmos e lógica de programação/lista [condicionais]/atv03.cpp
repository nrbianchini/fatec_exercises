#include <iostream>
#include <math.h>
main () {
	float a,rq;
	int q;
	setlocale(LC_ALL,"portuguese");
	printf("insira um n�mero: ");
	scanf("%f",&a);
	
	if (a>0) {
	rq=sqrt(a);
	    printf("a raiz quadrada deste n�mero � %.2f",rq);
	}
	
	else {
	q=pow(a,2);
		printf("este n�mero ao quadrado � %d",q);
	}
}
