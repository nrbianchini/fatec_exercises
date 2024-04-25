#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
main () {
	float x,y,r;
	setlocale(LC_ALL,"portuguese");
	printf("digite a coordenada x: ");
	scanf("%f",&x);
	printf("digite a coordenada y: ");
	scanf("%f",&y);
	r=sqrt(pow(x,2)+pow(y,2));
	printf("a distância é: %.2f \n",r);
	fflush(stdin);
	return 0;
}
