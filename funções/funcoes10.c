#include <stdio.h>

float maiorMenor (float x, float y) {
    if (x > y) return x;
    else if (y > x) return y;
}

int main (){
     float num1, num2;
    scanf("%f %f", &num1, &num2);

    printf("%.1f", maiorMenor(num1, num2));
}
//
// Created by natha on 11/04/2024.
//
