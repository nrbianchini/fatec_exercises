#include <iostream>
main () {
	int a,b,c;
	setlocale(LC_ALL,"portuguese");
	printf("insira dois n�meros inteiros: ");
	scanf("%d %d",&a,&b);
	
	if (a>b) {
	c=a-b;
	printf("o maior n�mero � %d \n",a);
	printf("a diferen�a entre ambos � %d",c);
	}
	
	else {
	c=b-a;
	printf("o maior n�mero � %d \n",b);
	printf("a diferen�a entre ambos � %d",c);
	}
}
