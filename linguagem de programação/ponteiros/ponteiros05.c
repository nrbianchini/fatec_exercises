#include <stdio.h>
// PROTÓTIPO DA FUNÇÃO COM DOIS PONTEIROS INTEIROS X & Y
void retornaMaiorMenor(int *x, int*y) {
    // PARA A TROCA, CRIA-SE UMA TERCEIRA VARIÁVEL 'AUX'
    if (*x < *y) { // COMO SE TROCA O MENOR, USA-SE O <
        int aux = *x; // COM O * PEGO O CONTEÚDO DA VARIÁVEL
        *x = *y;
        *y = aux;
    }
}

    int main() {
        int num1, num2;
        scanf("%d", &num1);
        scanf("%d", &num2);
        //printf("%d e %d", num1, num2);

        retornaMaiorMenor(&num1, &num2);

        printf("num1 = %d, num2 = %d\n", num1, num2);
}