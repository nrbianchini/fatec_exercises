#include <iostream>
#include <math.h>
main (){
	setlocale(LC_ALL,"portuguese");
	float a,b,c,m,mg,area;
	printf("insira tr�s n�meros reais e positivos: ");
	scanf("%f %f %f", &a,&b,&c);
	m=(a+b+c)/c;
	mg=pow(a*b*c,0.333333);
	area=M_PI*pow(a,2);
	printf("a m�dia destes n�meros �: %.4f \n",m);
	printf("a m�dia geom�trica destes n�meros �: %.4f \n",mg);
	printf("o valor da �rea do c�rculo, de modo que o n�mero inserido seja o; raio �: %.5f \n",area);
	system("pause");
}
