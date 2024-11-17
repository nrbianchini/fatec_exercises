#include <iostream>
#include <stdio.h>
#include <stdlib.h>
main (){
	int x;
	int n,s=0,m;
	setlocale(LC_ALL,"portuguese");
	for (x>0; x<=9; x=x+1) {
		printf("insira dez números inteiros positivos: \n");
		scanf("%d",&n);
	while (n<0) {
		printf("número não positivo \n");
		printf("insira dez números inteiros positivos: \n");
		scanf("%d",&n);
	}
	s=s+n;
}
    m=s/10;
    printf("a média é: %d",m);
}
