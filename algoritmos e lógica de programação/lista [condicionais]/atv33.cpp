#include <iostream>
int main () {
	float pa,pn;
	setlocale(LC_ALL,"portuguese");
	printf("insira o preço antigo do produto: ");
	scanf("%f",&pa);
	
	if (pa<50) {
		pn=pa+(pa*0.05);
		printf("o novo valor do produto é de: R$%.2f",pn);
	}
	else if (pa<=100) {
		pn=pa+(pa*0.10);
		printf("o novo valor do produto é de: R$%.2f",pn);
	}
	else if (pa>100) {
		pn=pa+(pa*0.15);
		printf("o novo valor do produto é de: R$%.2f",pn);
	}
}
