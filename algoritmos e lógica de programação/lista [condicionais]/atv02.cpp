#include <iostream>
#include <math.h>
main () {
	float a;
	int rq;
	setlocale(LC_ALL,"portuguese");
	printf("insira um n�mero: ");
	scanf("%f",&a);
	
	if (a>0) {
	rq=sqrt(a);
	    printf("a raiz quadrada deste n�mero � %d",rq);
	}
	
	else {
		printf("o n�mero � inv�lido");
	}
}
