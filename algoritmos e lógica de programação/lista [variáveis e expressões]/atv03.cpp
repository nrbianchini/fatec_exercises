#include <iostream>
main (){
	int a,b,c,d;
	setlocale(LC_ALL,"portuguese");
	printf("insira três valores inteiros: ");
	scanf("%d %d %d",&a,&b,&c);
	d=a+b+c;
	printf("a soma destes valores é: %d \n",d);
	system("pause");
}
