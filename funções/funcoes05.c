#include <stdio.h>
#include <math.h>

void calculoEsfera (int raio) {
    double volume = (4.0/3.0)*M_PI*pow(raio, 3);
    printf("%.1f", volume);
}

int main (){
    int r;
    scanf("%d", &r);

    calculoEsfera(r);
}

//
// Created by natha on 20/04/2024.
//
