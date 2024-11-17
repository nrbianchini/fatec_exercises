#include <iostream>
#include <math.h>
main (){
	float a,s,sl;
	setlocale(LC_ALL,"portuguese");
	printf("insira os dias trabalhados pelo encanador: ");
	scanf("%f",&a);
	
	s=a*30;
	sl=s-(s*0.08);
	
	printf("a quantia líquida que deve ser paga é de: R$ %.2f \n",sl);
	system("pause");
}
