#include <stdio.h>
main (){
	char a;
	int b;
	setlocale(LC_ALL,"portuguese");
	printf("digite uma letra mai�scula: ");
	scanf("%c",&a);
	b=a+32;
	printf("a letra digitada em min�sculo �: %c \n",b);
	system("pause");
}
