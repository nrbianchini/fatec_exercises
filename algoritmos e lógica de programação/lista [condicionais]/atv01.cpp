#include <iostream>
main (){
	int a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira dois n�meros: ");
	scanf("%d %d",&a,&b);
	
	if (a>b) {
		printf("o maior n�mero � %d",a);
	}
	else {
		printf("o maior n�mero � %d",b);
	}
	return 0;
}
