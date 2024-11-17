#include <iostream>
#include <math.h>
main () {
	float a;
	int rq;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número: ");
	scanf("%f",&a);
	
	if (a>0) {
	rq=sqrt(a);
	    printf("a raiz quadrada deste número é %d",rq);
	}
	
	else {
		printf("o número é inválido");
	}
}
