#include <iostream>
#include <math.h>
main (){
	float a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira um n�mero real: ");
	scanf("%f",&a);
	b=pow(a,2);
	printf("o quadrado deste n�mero �: %.f \n",b);
	system("pause");
}
