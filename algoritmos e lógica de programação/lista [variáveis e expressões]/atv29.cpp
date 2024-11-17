#include <iostream>
#include <math.h>
main (){
	float a,b,c,d,ma;
	setlocale(LC_ALL,"portuguese");
	printf("insira quatro notas: ");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	ma=(a+b+c+d)/4;
	printf("a média aritmética é: %.2f \n",ma);
	system("pause");
}
