#include <iostream>
main () {
	int i,n,soma=0;
	setlocale(LC_ALL,"portuguese");
	
	printf("insira um n�mero inteiro positivo: ");
	scanf("%d",&n);
	
    while (i<=n) {
    soma=soma+i;
    i++;
    }
    printf("%d\n",soma);
  
    system("pause");
}

