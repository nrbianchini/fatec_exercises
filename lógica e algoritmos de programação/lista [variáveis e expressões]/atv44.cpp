#include <iostream>
#include <math.h>
main (){
	int a,b,c;
	float d;
	setlocale(LC_ALL,"portuguese");
	printf("insira a altura do degrau em cm: ");
	scanf("%d",&a);
	printf("insira a altura que deseja alcançar em metros: ");
	scanf("%d",&b);
	c=b*100;
	d=c/a;
	printf("você deve subir %.2f degraus \n",d);
	system("pause");
}
