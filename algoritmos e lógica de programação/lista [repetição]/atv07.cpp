#include <iostream>
#include <stdio.h>
#include <stdlib.h>
main (){
	int x;
	int n,s=0,m;
	setlocale(LC_ALL,"portuguese");
	for (x>0; x<=9; x=x+1) {
		printf("insira dez n�meros inteiros positivos: \n");
		scanf("%d",&n);
	while (n<0) {
		printf("n�mero n�o positivo \n");
		printf("insira dez n�meros inteiros positivos: \n");
		scanf("%d",&n);
	}
	s=s+n;
}
    m=s/10;
    printf("a m�dia �: %d",m);
}
