#include <iostream>
int main () {
	float vlr1,vlr2,soma,sub,div,mult;
	int op;
	setlocale(LC_ALL,"portuguese");
	printf("escolha uma op��o: \n [1] - soma entre dois valores. \n [2] - subtra��o entre dois valores. \n [3] - divis�o entre dois valores. \n [4] - multplica��o entre dois valores. \n");
	scanf("%d",&op);
	printf("insira os dois valores: ");
	scanf("%f %f",&vlr1,&vlr2);
	
	if (op==1) {
		soma=vlr1+vlr2;
		printf("o resultado da soma entre os dois valores �: %.2f",soma);
	}
	else if (op==2) {
		sub=vlr1-vlr2;
		printf("o resultado da subtra��o entre os dois valores �: %.2f",sub);	
	}
	else if (op==3) {
		div=vlr1/vlr2;
		printf("o resultado da divis�o entre os dois valores �: %.2f",div);
	}
	else if (op==4) {
		mult=vlr1*vlr2;
		printf("o resultado da multiplica��o entre os dois valores �: %.2f",mult);
    }
	else {
		printf("op��o inv�lida");
	}
}
