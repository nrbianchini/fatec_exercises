#include <stdio.h>
main (){
	char a;
	int b;
	setlocale(LC_ALL,"portuguese");
	printf("digite uma letra maiúscula: ");
	scanf("%c",&a);
	b=a+32;
	printf("a letra digitada em minúsculo é: %c \n",b);
	system("pause");
}
