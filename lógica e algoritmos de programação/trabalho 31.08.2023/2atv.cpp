#include <iostream>
#include <math.h>
main (){
	setlocale(LC_ALL,"portuguese");
	float a,b,c,m,mg,area;
	printf("insira três números reais e positivos: ");
	scanf("%f %f %f", &a,&b,&c);
	m=(a+b+c)/c;
	mg=pow(a*b*c,0.333333);
	area=M_PI*pow(a,2);
	printf("a média destes números é: %.4f \n",m);
	printf("a média geométrica destes números é: %.4f \n",mg);
	printf("o valor da área do círculo, de modo que o número inserido seja o; raio é: %.5f \n",area);
	system("pause");
}
