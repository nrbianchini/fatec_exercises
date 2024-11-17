#include <stdio.h>
#include <iostream>
#include <stdlib.h>
main () {
	int h,m,s;
	setlocale(LC_ALL,"portuguese");
	printf("a hora inicial é: ");
	scanf("%d:%d:%d",&h,&m,&s);
	int duracao;
	printf("insira a duração em segundos: ");
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
	printf("a experiência terminará às: %d:%d:%d \n",hf,mf,sf);
	system("pause");
	return 0;
	}
