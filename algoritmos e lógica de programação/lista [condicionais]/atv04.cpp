#include <iostream>
#include <math.h>
main () {
	float a;
	int q,rq;
	setlocale(LC_ALL,"portuguese");
	printf("insira um n�mero: ");
	scanf("%f",&a);
	
	if (a>0) {
	q=pow(a,2);
		printf("este n�mero ao quadrado � %d \n",q);
	rq=sqrt(a);
	    printf("a raiz quadrada deste n�mero � %d",rq);
	}
	
	else {
		printf("este n�mero � inv�lido");
	}
}
