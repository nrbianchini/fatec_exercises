#include <iostream>
main () {
	float numero,maior;
	int n,x,contador;
	setlocale(LC_ALL,"portuguese");
	
	printf("digite a quantidade: ");
	scanf ("%d",&n);
	for (x=1; x<=n; x++) {
	
	printf("insira um número: ");
	scanf("%f",&numero);
	
	if (x==1) {
		maior=numero;
		contador=1;
	}
	else if (numero>maior) {
	maior=numero; 
	contador=1;
    }
    else if (numero==maior) contador++;
    }
    printf("maior: %.2f aparece %d \n",maior,contador);
    system("pause");
	}
