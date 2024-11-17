#include <stdio.h>
    // PROTÓTIPO DA FUNÇÃO COM DOIS PONTEIROS INTEIROS X & Y
    void trocaValores(int *x, int*y) {
        // PARA A TROCA, CRIA-SE UMA TERCEIRA VARIÁVEL 'AUX'
        int aux = *x; // COM O * PEGO O CONTEÚDO DA VARIÁVEL
        *x = *y;
        *y = aux;
    }

        int main() {
            // LÊ-SE DOIS INTEIROS
            int num1, num2;
            scanf("%d", &num1);
            scanf("%d", &num2);
            printf("antes da troca: num1 = %d, num2 = %d\n", num1, num2);

            // CHAMA A FUNÇÃO ATRIBUINDO A ENTRADA ÀS VARIÁVEIS DA FUNÇÃO
            trocaValores(&num1, &num2);

            printf("depois da troca: num1 = %d, num2 = %d\n", num1, num2);
        }