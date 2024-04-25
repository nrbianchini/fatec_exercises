#include <stdio.h>

int somaMeio (int x, int y) {
    int menor, maior;
    int soma = 0;

    if (x > y) {
        maior = x;
        menor = y;
    }
    else {
        maior = y;
        menor = x;
    }

    for (int i = menor + 1; i < maior ; i++) {
        soma += i;
        }
    return soma;
    }

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int resultado = somaMeio(num1, num2);
    printf("%d", resultado);
}
//
// Created by natha on 11/04/2024.
//
