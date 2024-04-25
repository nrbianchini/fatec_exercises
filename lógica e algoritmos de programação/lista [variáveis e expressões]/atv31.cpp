#include <iostream>
main(){
	int n,a,s;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número inteiro: ");
	scanf("%d",&n);
	a=n-1;
	s=n+1;
	printf("o antecessor deste número é: %d \n",a);
	printf("o sucessor deste número é: %d \n",s);
	system("pause");
}
