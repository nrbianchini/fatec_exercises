#include <iostream>
main () {
	int i,n;
	setlocale(LC_ALL,"portuguese");
	
	printf("insira um n�mero inteiro positivo �mpar: ");
	scanf("%d",&n);
	
	for (i=n; i>=0; i=i-2) printf("%d \n",i);
	system("pause");
}
