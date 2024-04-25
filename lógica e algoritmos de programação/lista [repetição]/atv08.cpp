#include <iostream>
main (){
	float numero, maior, menor;
	int x;
	setlocale(LC_ALL,"portuguese");
	for (x=1; x<=10; x++) {
	
	printf("insira um número: ");
	scanf("%f",&numero);
	
	if (x==1) {
		maior=numero;
		menor=numero;
	}
	else if (numero>maior) maior=numero;
	else if (numero<menor) menor=numero;
}
    printf("maior: %.2f \nmenor: %.2f \n",maior,menor);
    system("pause");
	}
