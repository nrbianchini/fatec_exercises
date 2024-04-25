#include <iostream>
#include <math.h>
main (){
	float a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número real: ");
	scanf("%f",&a);
	b=pow(a,2);
	printf("o quadrado deste número é: %.f \n",b);
	system("pause");
}
