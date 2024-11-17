#include <iostream>
#include <math.h>
main (){
	int x,n,numero;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número inteiro: ");
	scanf("%d",&n);
	x=1;
	numero=1;
    while (x<=n) {
	printf("%d \n",numero);
	numero=numero+2;
	x++;
}
	system("pause");
}
