#include <iostream>
main (){
	int x,par,soma;
	x=1;
	soma= 0;
	par = 2;
	while (x<=50) {
		soma=soma+par;
		par=par+2;
		x++;
	}
	printf("soma dos 50 primeiros pares: %d \n",soma);
	system("pause");
}
