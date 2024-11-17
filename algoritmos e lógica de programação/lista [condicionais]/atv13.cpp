#include <iostream>
int main () {
	float p1,p2,p3,mp;
	setlocale(LC_ALL,"portuguese");
	printf("insira a nota da primeira prova: ");
	scanf("%f",&p1);
	printf("insira a nota da segunda prova: ");
	scanf("%f",&p2);
	printf("insira a nota da terceira prova: ");
	scanf("%f",&p3);
	
	mp=((p1*1)+(p2*1)+(p3*2))/(1+1+2);
	printf("a média do aluno foi de %.2fpts \n",mp);
	
	if (mp>=60) {
		printf("o aluno foi APROVADO");
	}
	
	else {
		printf("o aluno foi REPROVADO");
	}
}
