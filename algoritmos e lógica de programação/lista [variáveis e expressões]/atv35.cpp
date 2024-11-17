#include <iostream>
#include <stdio.h>
#include <math.h>
main (){
	int a,b;
	float h;
	setlocale(LC_ALL,"portuguese");
	printf("insira os valores dos catetos a e b: ");
	scanf("%d %d",&a,&b);
	h=sqrt((a*a)+(b*b));
	printf("a hipotenusa é no valor de: %.2f \n",h);
	system("pause");
	return 0;
}
