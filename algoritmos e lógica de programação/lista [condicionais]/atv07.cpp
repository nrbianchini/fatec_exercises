#include <iostream>
main () {
	int a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira dois n�meros inteiros: ");
	scanf("%d %d",&a,&b);
	
	if (a>b) {
	printf("o maior n�mero � %d",a);
	}
	
	else if (a<b) {
	printf("o maior n�mero � %d",b);
	}
	
	else if (a==b) {
	printf("os n�meros s�o iguais");
	}
}
