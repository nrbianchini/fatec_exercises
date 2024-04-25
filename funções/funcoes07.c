#include <stdio.h>

float conversaoTemperatura (float temp) {
    float conversao=temp*(9.0/5.0)+32.0;
    return conversao;
}

int main (){
    float temperatura;
    scanf("%f", &temperatura);

    printf("%.1f", conversaoTemperatura(temperatura));
}
//
// Created by natha on 10/04/2024.
//
