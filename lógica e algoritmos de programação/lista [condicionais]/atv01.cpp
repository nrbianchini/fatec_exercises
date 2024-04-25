#include <iostream>
main (){
	int a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira dois números: ");
	scanf("%d %d",&a,&b);
	
	if (a>b) {
		printf("o maior número é %d",a);
	}
	else {
		printf("o maior número é %d",b);
	}
	return 0;
}
