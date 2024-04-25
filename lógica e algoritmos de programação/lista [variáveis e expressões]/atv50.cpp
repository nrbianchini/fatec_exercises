#include <iostream>
main (){
	int a,i,d;
	setlocale(LC_ALL,"portuguese");
	printf("insira o ano atual: ");
	scanf("%d",&a);
	printf("insira sua idade: ");
	scanf("%d",&i);
	
	d=a-i;
	
	printf("seu ano de nascimento é: %d \n",d);
	system("pause");
}
