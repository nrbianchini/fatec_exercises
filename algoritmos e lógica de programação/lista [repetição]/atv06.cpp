#include <iostream>
#include <stdio.h>
#include <stdlib.h>
main (){
	int x;
	float n,s=0,m;
	x=1;
	setlocale(LC_ALL,"portuguese");
	while (x<=10) {	
	printf("digite dez n�meros inteiros: \n");
	scanf("%f",&n);	
	    x=x+1;
		s=s+n;
		m=s/10;
		printf("a m�dia �: %.2f \n",m);
	}
}
