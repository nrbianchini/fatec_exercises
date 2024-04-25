#include <iostream>
#include <math.h>
main (){
	int s,h,m,seg,resto;
	setlocale(LC_ALL,"portuguese");
	printf("insira um valor inteiro em segundos: ");
	scanf("%d",&s);
	h=s/3600;
	resto=s%3600;
	m=resto/60;
	seg=resto%60;
	printf("%d:%d:%d \n",h,m,seg);
	system("pause");
}
