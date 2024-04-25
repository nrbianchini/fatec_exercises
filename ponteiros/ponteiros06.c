#include <stdio.h>
void somaDobro (int *x, int *y) {
    *x = *x * 2;
    *y = *y * 2;
}

int main (){
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("antes da funcao: %d e %d\n", num1, num2);

    somaDobro(&num1, &num2);

    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("a soma eh %d", num1+num2);
}
