#include <iostream>
int main () {
	float basemaior,basemenor,altura,a;
	setlocale(LC_ALL,"portuguese");
	printf("insira a base maior do trapézio: ");
	scanf("%f",&basemaior);
	printf("insira a base menor do trapézio: ");
	scanf("%f",&basemenor);
	printf("insira a altura do trapézio: ");
	scanf("%f",&altura);
	
	if (basemaior>0 && basemenor>0) {
	a=(basemaior+basemenor)*altura/2;
	printf("a área do trapézio é %.2f",a);
	}
	else {
		printf("não foi possível calcular");
	}
	}
