#include <iostream>
main () {
	int n,c,d,e;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número entre 100 e 999: ");
	scanf("%d",&n);
	
	
	while (n<100 || n>999) {
		printf("valor INVÁLIDO\ninsira um número entre 100 e 999: ");
		scanf("%d",&n);
	}
	
	c=n/100;
	d=n%100/10;
	e=n%100%10;
	printf("%d\n%d\n%d\n",c,d,e);
	system("pause");
}

