#include <iostream>
int main () {
	char doc[50];
	int op,id,saldo,le,saque,dp,fat;
	setlocale(LC_ALL,"portuguese");
	for (;;) {
		system("cls");
	printf("Selecione uma op��o: \n");
	printf("[1] - Dados do Cliente \n");
	printf("[2] - Saldo \n");
	printf("[3] - Cheque Especial \n");
	printf("[4] - Saque \n");
	printf("[5] - Dep�sito \n");
	printf("[6] - Aplica��o Financeira \n");
	printf("[7] - Aquisi��o Cart�o de Cr�dito \n");
	printf("[8] - Pagamento do Cart�o de Cr�dito \n");
	printf("[9] - Fim do programa \n");
	scanf("%d",&op);
	if (op==1) {
		printf("CADASTRO DE NOVO CLIENTE \nInsira seu nome: ");
		scanf("%s",&doc);
		printf("Insira o n�mero de sua conta banc�ria: ");
		scanf("%d",&id);
		saldo=0;
		le=0;
	}
	else if (op==2) {
		printf("- Saldo Cliente: R$%d \n",saldo);
		    le=le+saldo;
		printf("- Limite Cheque Especial: R$%d \n",le);
		printf("- Saldo para Saque: R$%d \n",le);
		system("pause");
	}
	else if (op==3) {
		le=le+1000;
		printf("Voc� agora tem R$%d dispon�veis como cheque especial! \n",le);
		system("pause");
	}
	else if (op==4) {
		printf("Insira o valor que deseja sacar: R$",saque);
		scanf("%d",&saque);
		saldo=saldo+le;
		if (saque>saldo) {
			printf("N�o h� saldo suficiente na conta para realizar esta transa��o. \n"); }
		else if (saque<=saldo) {
			saldo=saque-saldo;
			printf("Transa��o realizada com sucesso! Seu novo saldo � de R$%d \n",saldo);
		}	
		system("pause");
		}
	else if (op==5) {
		printf("Insira o valor que deseja depositar: R$",dp);
		scanf("%d",&dp);
		saldo=saldo+dp;
		printf("Transa��o realizada com sucesso! Seu novo saldo � de R$%d \n",saldo);
		system("pause");
	}
	else if (op==6) {
		printf("Aplica��o financeira realizada.\n");
		saldo=saldo+(saldo*0.05);
		printf("Seu novo saldo ap�s rendimentos � de: R$%d \n",saldo);
		system("pause");
	}
	else if (op==7) {
		printf("%s, conta n�mero %d, voc� tem direito a um cart�o de cr�dito. \n",doc,id);
		system("pause");
	}
	else if (op==8) {
		printf("Insira o valor de sua fatura: R$",fat);
		scanf("%d",&fat);
		if (fat>saldo) {
			printf("N�o h� saldo suficiente na conta para realizar esta transa��o. \n"); 
}
		else if (fat<=saldo) {
			saldo=saldo-fat;
			printf("Transa��o realizada com sucesso! Seu novo saldo � de R$%d \n",saldo);
		}	
		system("pause");
		}  	
		else if (op == 9){
			break;
		}
	}
    system("pause");
}
