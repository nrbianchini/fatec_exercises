#include <iostream>
#include <math.h>
main (){
	float a,p,imc;
	setlocale(LC_ALL,"portuguese");
	printf("insira seu peso: ");
	scanf("%f",&p);
	printf("insira sua altura: ");
	scanf("%f",&a);
	imc=p/(pow(a,2));
	
	if (imc<=18.5) {
	printf("sua classifica��o �: abaixo do peso");
    }
    
	else if (imc<=24.9) {
	printf("sua classifica��o �: sa�davel");
	}
	
	else if (imc<=29.9) {
	printf("sua classifica��o �: peso em excesso");
	}
	
	else if (imc<=34.9) {
	printf("sua classifica��o �: obesidade grau I");
    } 
    
	else if (imc<=39.9) {
	printf("sua classifica��o �: obesidade grau II (severa)");
    }
    
	else if (imc >=40.0) {
	printf("sua classifica��o �: obesidade grau III (m�rbida)");
    }
    
	return 0;
}

