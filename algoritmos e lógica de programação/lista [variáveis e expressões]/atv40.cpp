#include <iostream>
#include <math.h>
main (){
	float a,s,sl;
	setlocale(LC_ALL,"portuguese");
	printf("insira os dias trabalhados pelo encanador: ");
	scanf("%f",&a);
	
	s=a*30;
	sl=s-(s*0.08);
	
	printf("a quantia l�quida que deve ser paga � de: R$ %.2f \n",sl);
	system("pause");
}
