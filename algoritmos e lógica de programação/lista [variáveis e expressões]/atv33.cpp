#include <iostream>
#include <math.h>
main (){
	float l,a;
	setlocale(LC_ALL,"portuguese");
	printf("insira o tamanho do lado do quadrado: ");
	scanf("%f",&l);
	a=l*l;
	printf("a �rea deste quadrado �: %.2f \n",a);
	system("pause");
}
