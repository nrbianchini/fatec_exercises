#include <iostream>
main () {
	float soma=0;
	int n,x;
	setlocale(LC_ALL,"portuguese");
	printf("insira um n�mero harm�nico: ");
	scanf("%d",&n);
	
	for (x=1; x<=n; x++) {
	soma=soma+1.0/x;
}
    printf("harm�nico: %.8f\n",soma);
    system("pause");
}
