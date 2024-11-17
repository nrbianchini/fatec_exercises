#include <stdio.h>
#include <iostream>

	int isAnoBissexto (int ano) {
	if((ano%400==0) || (ano%4==0 && ano%100!=0))
		return 1;
		return 0;
	}

	int dateValidator (int dia, int mes, int ano){
		const int anoAtual=2008;
	if (ano>anoAtual) {
		return 1;
		}
	else if (ano==anoAtual) return 1;
	if (mes<1 || mes>12) return 1;
	if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
		return (dia<1 || dia>31) ? 1 : 0;
		} 
	else if (mes==4 || mes==6 || mes==9 || mes==11) {
		return (dia<1 || dia>30) ? 1 : 0;
		}
	else {
			if (isAnoBissexto(ano)) {
		return (dia<1 || dia>29) ? 1 : 0;
		}
	else
		return (dia<1 || dia>28) ? 1 : 0;
		}
		return 0;
	}

int main(int argc, char const *argv[])
{
	int dia,mes,ano;
	setlocale(LC_ALL,"portuguese");
	printf("informe dia de nascimento: ");
	scanf("%d",&dia);
	printf("informe o mês de nascimento: ");
	scanf("%d",&mes);
	printf("informe o ano de nascimento: ");
	scanf("%d",&ano);

	if(dateValidator(dia,mes,ano))
		printf("data de nascimento INVÁLIDA");
	else
		printf("data de nascimento VÁLIDA");

	return 0;
}
