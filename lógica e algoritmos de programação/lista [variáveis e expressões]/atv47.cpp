#include <iostream>
#include <math.h>
main (){
	int a,b,c,d,e;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número inteiro de quatro dígitos: ");
	scanf("%d",&a);
    b=a/1000;
    c=a/100-10*b;
    d=a/10-100*b-10*c;
    e=a/1-1000*b-100*c-10*d;
    printf("%d\n%d\n%d\n%d\n",b,c,d,e);
	system("pause");
}
