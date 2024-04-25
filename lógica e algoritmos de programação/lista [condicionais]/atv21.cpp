#include <iostream>
#include <math.h>
main () {
	int op,num1,num2,soma,dif,prod,div;
	setlocale(LC_ALL,"portuguese");
	printf("escolha uma opção: \n 1 - soma de 2 números. \n 2 - diferença entre 2 números (maior pelo menor). \n 3 - produto entre 2 números. \n 4 - divisão entre 2 números (o denominador não pode ser zero). \n opção: ");
	scanf("%d",&op);
	printf("insira os 2 números: ");
	scanf("%d %d",&num1,&num2);
	
	if (op==1) {
	soma=num1+num2;
	printf("a soma dos 2 números vale: %d",soma);
	}
	else if (op==2 && num1>num2) {
	dif=num1-num2;
	printf("a diferença entre os 2 números vale: %d",dif);
	}
	else if (op==2 && num2>num1) {
	dif=num2-num1;
	printf("a diferença entre os 2 números vale: %d",dif);
	}
	else if (op==3) {
	prod=num1*num2;
	printf("o produto entre os 2 números vale: %d",prod);
	}
	else if (op==4 && num2!=0) {
	div=num1/num2;
	printf("a divisão entre os 2 números vale: %d",div);
	}
	else {
	printf("opção inválida");
	}
}
