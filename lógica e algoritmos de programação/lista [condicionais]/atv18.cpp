#include <iostream>
int main () {
	float vlr1,vlr2,soma,sub,div,mult;
	int op;
	setlocale(LC_ALL,"portuguese");
	printf("escolha uma opção: \n [1] - soma entre dois valores. \n [2] - subtração entre dois valores. \n [3] - divisão entre dois valores. \n [4] - multplicação entre dois valores. \n");
	scanf("%d",&op);
	printf("insira os dois valores: ");
	scanf("%f %f",&vlr1,&vlr2);
	
	if (op==1) {
		soma=vlr1+vlr2;
		printf("o resultado da soma entre os dois valores é: %.2f",soma);
	}
	else if (op==2) {
		sub=vlr1-vlr2;
		printf("o resultado da subtração entre os dois valores é: %.2f",sub);	
	}
	else if (op==3) {
		div=vlr1/vlr2;
		printf("o resultado da divisão entre os dois valores é: %.2f",div);
	}
	else if (op==4) {
		mult=vlr1*vlr2;
		printf("o resultado da multiplicação entre os dois valores é: %.2f",mult);
    }
	else {
		printf("opção inválida");
	}
}
