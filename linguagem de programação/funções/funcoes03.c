#include <stdio.h>

float verificarNumero (float x) {
    if (x > 0) {
        return 1;
    } else if (x == 0) {
        return 0;
    } else if (x < 0) {
        return -1;
    }
}

int main (){
    float num;
    scanf("%f", &num);

    int resultado = verificarNumero(num);
    printf("%d\n", resultado);
}
//
// Created by natha on 10/04/2024.
//
