#include <iostream>
main (){
	float a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número real: ");
	scanf("%f",&a);
	b=a/5;
	printf("a quinta parte deste número é: %.2f \n",b);
	system("pause");
}
