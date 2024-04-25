#include <iostream>
int main () {
	char doc[50];
	int op,id,saldo,le,saque,dp,fat;
	setlocale(LC_ALL,"portuguese");
	for (;;) {
		system("cls");
	printf("Selecione uma opção: \n");
	printf("[1] - Dados do Cliente \n");
	printf("[2] - Saldo \n");
	printf("[3] - Cheque Especial \n");
	printf("[4] - Saque \n");
	printf("[5] - Depósito \n");
	printf("[6] - Aplicação Financeira \n");
	printf("[7] - Aquisição Cartão de Crédito \n");
	printf("[8] - Pagamento do Cartão de Crédito \n");
	printf("[9] - Fim do programa \n");
	scanf("%d",&op);
	if (op==1) {
		printf("CADASTRO DE NOVO CLIENTE \nInsira seu nome: ");
		scanf("%s",&doc);
		printf("Insira o número de sua conta bancária: ");
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
		printf("Você agora tem R$%d disponíveis como cheque especial! \n",le);
		system("pause");
	}
	else if (op==4) {
		printf("Insira o valor que deseja sacar: R$",saque);
		scanf("%d",&saque);
		saldo=saldo+le;
		if (saque>saldo) {
			printf("Não há saldo suficiente na conta para realizar esta transação. \n"); }
		else if (saque<=saldo) {
			saldo=saque-saldo;
			printf("Transação realizada com sucesso! Seu novo saldo é de R$%d \n",saldo);
		}	
		system("pause");
		}
	else if (op==5) {
		printf("Insira o valor que deseja depositar: R$",dp);
		scanf("%d",&dp);
		saldo=saldo+dp;
		printf("Transação realizada com sucesso! Seu novo saldo é de R$%d \n",saldo);
		system("pause");
	}
	else if (op==6) {
		printf("Aplicação financeira realizada.\n");
		saldo=saldo+(saldo*0.05);
		printf("Seu novo saldo após rendimentos é de: R$%d \n",saldo);
		system("pause");
	}
	else if (op==7) {
		printf("%s, conta número %d, você tem direito a um cartão de crédito. \n",doc,id);
		system("pause");
	}
	else if (op==8) {
		printf("Insira o valor de sua fatura: R$",fat);
		scanf("%d",&fat);
		if (fat>saldo) {
			printf("Não há saldo suficiente na conta para realizar esta transação. \n"); 
}
		else if (fat<=saldo) {
			saldo=saldo-fat;
			printf("Transação realizada com sucesso! Seu novo saldo é de R$%d \n",saldo);
		}	
		system("pause");
		}  	
		else if (op == 9){
			break;
		}
	}
    system("pause");
}
