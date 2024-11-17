#include <iostream>
#include <math.h>
main (){
	float a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira o valor do produto: ");
	scanf("%f",&a);
	
	b=a-(a*0.12);
	printf("o valor do produto à vista é de: R$%.2f \n",b);
	system("pause");
}
