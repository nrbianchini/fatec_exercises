#include <iostream>

int main(){

	int nota;
	int soma=0;
	int contador=0;
	float media;
    setlocale(LC_ALL,"portuguese");

	printf("digite as notas (somente valores entre 10 e 20). digite um valor inv�lido para encerrar: \n");

	do{
		scanf("%d",&nota);
		if(nota >= 10 && nota <= 20){
			soma += nota;
			contador ++;
		}
	}while(nota >= 10 && nota <=20);

	if(contador > 0){
		media = soma/contador;
		printf("a m�dia das notas digitadas �: %.2f\n", media);
	}else{
		printf("nenhuma nota v�lida foi digitada!");
	}

	return 0;
}
