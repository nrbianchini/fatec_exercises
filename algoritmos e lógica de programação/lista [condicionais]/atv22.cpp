#include <iostream>
main () {
	int id,ts;
	setlocale(LC_ALL,"portuguese");
	printf("insira a idade: ");
	scanf("%d",&id);
	printf("insira o tempo de serviço: ");
	scanf("%d",&ts);
	
	if (id>=65 || ts >=30 || (id>=60 && ts>=25)) {
		printf("apto à se aposentar");
	}
	else {
		printf("não está apto à se aposentar");
	}
	}
