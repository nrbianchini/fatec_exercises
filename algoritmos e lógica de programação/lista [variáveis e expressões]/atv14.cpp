#include <iostream>
#include<math.h>
main (){
	float g,r;
	setlocale(LC_ALL,"portuguese");
	printf("insira um �ngulo em graus: ");
	scanf("%f",&g);
	r=g*M_PI/180;
	printf("o radiando �: %.2f \n",r);
	system("pause");
	}
