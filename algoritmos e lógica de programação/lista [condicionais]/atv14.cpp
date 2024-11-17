#include <iostream>
int main () {
	float tlab,avs,ex,mp;
	setlocale(LC_ALL,"portuguese");
	printf("insira a nota referente ao trab. de laboratório: ");
	scanf("%f",&tlab);
	printf("insira a nota referente a aval. semestral: ");
	scanf("%f",&avs);
	printf("insira a nota referente ao exame final: ");
	scanf("%f",&ex);
	
	mp=((tlab*2)+(avs*3)+(ex*5))/(2+3+5);
	
	if (mp>=0 && mp<=2.9) {
		printf("o aluno está REPROVADO");
	}
	else if (mp>=3 && mp<=4.9) {
		printf("o aluno está de RECUPERAÇÃO");
	}
	else {
		printf("o aluno está APROVADO");
	}
	}
