#include <iostream>
#include <stdio.h>
#include <stdlib.h>
main (){
	int x;
	float n,s=0,m;
	x=1;
	setlocale(LC_ALL,"portuguese");
	while (x<=10) {	
	printf("digite dez números inteiros: \n");
	scanf("%f",&n);	
	    x=x+1;
		s=s+n;
		m=s/10;
		printf("a média é: %.2f \n",m);
	}
}
