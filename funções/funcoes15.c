#include <stdio.h>

void ladosTriangulo (float l1, float l2, float l3){
    if (l1 < l2+l3 && l2 < l1+l3 && l3 < l1+l2) {
        printf("triangulo\n");

        if (l1 == l2 && l2 == l3) printf("equilatero");
        else if (l1 == l2 || l2 == l3 || l1 == l3) printf("isosceles");
        else if (l1 != l2 && l2 != l3) printf("escaleno");
    }
    else printf("nao eh triangulo");
}

int main (){
    float lado1, lado2, lado3;

    while(lado1 == 0 || lado2 == 0 || lado3 == 0){
        scanf("%f %f %f", &lado1, &lado2, &lado3);
    }

    ladosTriangulo(lado1, lado2, lado3);
}
//
// Created by natha on 21/04/2024.
//
