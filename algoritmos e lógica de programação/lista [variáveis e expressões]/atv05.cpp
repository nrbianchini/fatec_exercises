#include <iostream>
main (){
	float a,b;
	setlocale(LC_ALL,"portuguese");
	printf("insira um n�mero real: ");
	scanf("%f",&a);
	b=a/5;
	printf("a quinta parte deste n�mero �: %.2f \n",b);
	system("pause");
}
