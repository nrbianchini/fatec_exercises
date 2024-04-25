#include <iostream>
#include<math.h>
main (){
	float g,r;
	setlocale(LC_ALL,"portuguese");
	printf("insira um ângulo em graus: ");
	scanf("%f",&g);
	r=g*M_PI/180;
	printf("o radiando é: %.2f \n",r);
	system("pause");
	}
