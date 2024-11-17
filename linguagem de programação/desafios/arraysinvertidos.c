#include <stdio.h>

// protótipo da função
void inverso (int*, int);

int main() {
    int num[] = {2, 5, 13, 72, 81, 21, 43, 32, 51, 98};
//  chamar a função com a variável e a quantidade de vetores
    inverso(num, 10);

    return 0;
}
//      NUM = VARIÁVEL DOS VETORES, S = QUANTIDADE DE VETORES
void inverso (int* num, int s) {
    for (int i=s-1; i>=0; i--)
        printf("%d\n", num[i]);
}