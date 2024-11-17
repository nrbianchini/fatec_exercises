#include <iostream>
main (){
	int n,u,d,c,i;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número inteiro: ");
	scanf("%d",&n);
	u=n/100;
	d=n%100/10;
	c=n%100%10;
	i=u+d*10+c*100;
	printf("o número invertido é: %d \n",i);
	system("pause");
}
