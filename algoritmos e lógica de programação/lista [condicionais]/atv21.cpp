#include <iostream>
#include <math.h>
main () {
	int op,num1,num2,soma,dif,prod,div;
	setlocale(LC_ALL,"portuguese");
	printf("escolha uma op��o: \n 1 - soma de 2 n�meros. \n 2 - diferen�a entre 2 n�meros (maior pelo menor). \n 3 - produto entre 2 n�meros. \n 4 - divis�o entre 2 n�meros (o denominador n�o pode ser zero). \n op��o: ");
	scanf("%d",&op);
	printf("insira os 2 n�meros: ");
	scanf("%d %d",&num1,&num2);
	
	if (op==1) {
	soma=num1+num2;
	printf("a soma dos 2 n�meros vale: %d",soma);
	}
	else if (op==2 && num1>num2) {
	dif=num1-num2;
	printf("a diferen�a entre os 2 n�meros vale: %d",dif);
	}
	else if (op==2 && num2>num1) {
	dif=num2-num1;
	printf("a diferen�a entre os 2 n�meros vale: %d",dif);
	}
	else if (op==3) {
	prod=num1*num2;
	printf("o produto entre os 2 n�meros vale: %d",prod);
	}
	else if (op==4 && num2!=0) {
	div=num1/num2;
	printf("a divis�o entre os 2 n�meros vale: %d",div);
	}
	else {
	printf("op��o inv�lida");
	}
}
