#include <stdio.h>

int main () {
    int num[] = {2, 9, 5, 29, 13, 51, 20, 72, 10, 4};
    int tamanho = sizeof(num) / sizeof(num[0]); // calcula o tamanho do array

    for (int i = tamanho - 1; i >= 0; i--) { // começa do último elemento e vai até o primeiro
        printf("%d ", num[i]); // imprime o número inverso
    }
    printf("\n");

    return 0;
}