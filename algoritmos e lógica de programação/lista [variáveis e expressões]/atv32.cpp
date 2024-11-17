#include <iostream>
#include <math.h>
main(){
	int a,b,c;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número inteiro: ");
	scanf("%d",&a);
	b=(a*3+1)+(a*2-1);
	printf("a soma é: %d \n",b);
	system("pause");
}
