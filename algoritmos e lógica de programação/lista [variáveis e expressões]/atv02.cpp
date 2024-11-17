#include <iostream>
main(){
	float a;
	setlocale(LC_ALL,"portuguese");
	printf("insira um número real: ");
	scanf("%f",&a);
	printf("%.2f \n",a);
	system("pause");
}
