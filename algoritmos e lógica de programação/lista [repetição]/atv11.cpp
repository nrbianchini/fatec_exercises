#include <iostream>
main () {
	setlocale(LC_ALL,"portuguese");
	int n,x;
	printf("insira um n�mero: ");
	scanf("%d",&n);
	
	for (x=0; x<=n; x++) printf("%d \n",x);
	system("pause");
}
