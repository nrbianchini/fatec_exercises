#include <iostream>
main () {
	setlocale(LC_ALL,"portuguese");
	int n,x;
    
    do { 
    printf("insira um número ímpar: ");
    scanf("%d",&n);
	}
	while (n%2==0);
	for (x=1; x<=n; x=x+2) printf("%d \n",x);
	system("pause");
	}

