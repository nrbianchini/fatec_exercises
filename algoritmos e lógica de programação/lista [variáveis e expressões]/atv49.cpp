#include <stdio.h>
#include <iostream>
#include <stdlib.h>
main () {
	int h,m,s;
	setlocale(LC_ALL,"portuguese");
	printf("a hora inicial �: ");
	scanf("%d:%d:%d",&h,&m,&s);
	int duracao;
	printf("insira a dura��o em segundos: ");
	scanf("%d",&duracao);
	int horas,minutos,segundos,resto;
	horas=duracao/3600;
	resto=duracao%3600;
	minutos=resto/60;
	segundos=resto%60;
	int hf,mf,sf;
	hf=h+horas;
	mf=m+minutos;
	sf=s+segundos;
	printf("a experi�ncia terminar� �s: %d:%d:%d \n",hf,mf,sf);
	system("pause");
	return 0;
	}
