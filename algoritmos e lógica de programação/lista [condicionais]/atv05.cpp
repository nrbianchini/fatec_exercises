#include <iostream>
#include <math.h>
main () {
	int a;
	setlocale(LC_ALL,"portuguese");
	printf("insira um n�mero: ");
	scanf("%d",&a);
	
	if (a%2==0) {
	    printf("este n�mero � par");
	}
	
	else {
		printf("este n�mero � �mpar");
	}
}
