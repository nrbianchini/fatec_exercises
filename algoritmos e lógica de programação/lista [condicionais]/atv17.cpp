#include <iostream>
int main () {
	float basemaior,basemenor,altura,a;
	setlocale(LC_ALL,"portuguese");
	printf("insira a base maior do trap�zio: ");
	scanf("%f",&basemaior);
	printf("insira a base menor do trap�zio: ");
	scanf("%f",&basemenor);
	printf("insira a altura do trap�zio: ");
	scanf("%f",&altura);
	
	if (basemaior>0 && basemenor>0) {
	a=(basemaior+basemenor)*altura/2;
	printf("a �rea do trap�zio � %.2f",a);
	}
	else {
		printf("n�o foi poss�vel calcular");
	}
	}
