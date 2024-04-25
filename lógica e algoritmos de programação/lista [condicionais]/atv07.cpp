#include <iostream>
main () {
	int a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira dois números inteiros: ");
	scanf("%d %d",&a,&b);
	
	if (a>b) {
	printf("o maior número é %d",a);
	}
	
	else if (a<b) {
	printf("o maior número é %d",b);
	}
	
	else if (a==b) {
	printf("os números são iguais");
	}
}
