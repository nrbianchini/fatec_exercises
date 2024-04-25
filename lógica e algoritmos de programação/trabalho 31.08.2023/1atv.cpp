#include <iostream>
#include <math.h>
main (){
	setlocale(LC_ALL,"portuguese");
	float a,b,c,s,m,sq;
	printf("insira tr�s valores reais: ");
	scanf("%f %f %f",&a,&b,&c);
	s=a+b+c;
	printf("a soma destes valores �: %.2f \n",s);
	m=(a+b+c)/3;
	printf("a m�dia aritm�tica destes valores �: %.3f \n",m);
	sq=pow(a,2)+pow(b,2)+pow(c,2);
	printf("a soma do quadrado destes valores �: %.3f \n",sq);
	system("pause");
}
