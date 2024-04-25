#include <iostream>
#include <math.h>
main () {
	float k,m;
	setlocale(LC_ALL,"portuguese");
	printf("insira uma velocidade em km/h: ");
	scanf("%f",&k);
    m=k/3.6;
    printf("tal velocidade em m/s é: %.2f \n",m);
    system("pause");
}
