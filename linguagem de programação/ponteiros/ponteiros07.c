#include <stdio.h>

void somaValores (int *x, int *y){
    *x= *x+*y;
}

int main (){
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    somaValores(&num1, &num2);
    printf("a soma eh: %d\no valor de num2 eh: %d", num1, num2);
}