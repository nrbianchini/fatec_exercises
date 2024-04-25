#include <stdio.h>
#include <math.h>

int main(){
    int num;
    int soma=0;
    int digito;
    scanf("%d", &num);

    while (num > 0) {
        digito = num % 10;
        soma += digito;
        num = num / 10;
    }
    printf("%d", soma);
}

//
// Created by natha on 20/04/2024.
//
