#include <iostream>
main () {
	int a,b,c;
	setlocale(LC_ALL,"portuguese");
	printf("insira dois números inteiros: ");
	scanf("%d %d",&a,&b);
	
	if (a>b) {
	c=a-b;
	printf("o maior número é %d \n",a);
	printf("a diferença entre ambos é %d",c);
	}
	
	else {
	c=b-a;
	printf("o maior número é %d \n",b);
	printf("a diferença entre ambos é %d",c);
	}
}
