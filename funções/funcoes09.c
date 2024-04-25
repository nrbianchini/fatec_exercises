#include <stdio.h>
#include <math.h>

float calcularHipotenusa(float num1, float num2){
    float hipotenusa = sqrt(pow(num1, 2) + pow(num2, 2));
    return hipotenusa;
}

int main (){
    float a, b;
    scanf("%f %f", &a, &b);

    printf("%.1f", calcularHipotenusa(a, b));
}
//
// Created by natha on 20/04/2024.
//
