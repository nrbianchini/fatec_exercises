#include <iostream>
main () {
	int id,ts;
	setlocale(LC_ALL,"portuguese");
	printf("insira a idade: ");
	scanf("%d",&id);
	printf("insira o tempo de servi�o: ");
	scanf("%d",&ts);
	
	if (id>=65 || ts >=30 || (id>=60 && ts>=25)) {
		printf("apto � se aposentar");
	}
	else {
		printf("n�o est� apto � se aposentar");
	}
	}
