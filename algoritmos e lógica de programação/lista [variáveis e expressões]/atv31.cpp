#include <iostream>
main(){
	int n,a,s;
	setlocale(LC_ALL,"portuguese");
	printf("insira um n�mero inteiro: ");
	scanf("%d",&n);
	a=n-1;
	s=n+1;
	printf("o antecessor deste n�mero �: %d \n",a);
	printf("o sucessor deste n�mero �: %d \n",s);
	system("pause");
}
