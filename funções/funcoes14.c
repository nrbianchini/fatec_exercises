#include <stdio.h>
#include <locale.h>

void consumoVeiculo (float quilometros, float litros) {
    float kml=quilometros/litros;

    if (kml<8) printf("venda o carro!");
    else if (kml<12) printf("economico!");
    else if (kml>14) printf("super economico");
}

int main (){
    float km, l;
    scanf("%f %f", &km, &l);

    consumoVeiculo(km, l);
}
//
// Created by natha on 21/04/2024.
//
