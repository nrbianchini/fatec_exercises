#include <iostream>
#include <math.h>
main (){
	int a,b,c,sq;
	setlocale(LC_ALL,"portuguese");
	printf("insira tr�s valores: ");
	scanf("%d %d %d",&a,&b,&c);
	sq=pow(a,2)+pow (b,2)+pow (c,2);
	printf("a soma dos quadrados destes valores �: %d \n",sq);
	system("pause");
}
