#include <stdio.h>
void calculoNotas (float n1, float n2, float n3, char operacao) {
    if (operacao == 'A'){
        float media = (n1 + n2 + n3) / 3;
        printf("%.1f", media);
    }
    else if (operacao == 'P'){
        float media = ((5*n1) + (3*n2) + (2*n3)) / (5+3+2);
        printf("%.1f", media);
    }
}

int main (){
    float prova1, prova2, prova3;
    char simbolo;

    scanf("%f %f %f %c", &prova1, &prova2, &prova3, &simbolo);

    calculoNotas(prova1, prova2, prova3, simbolo);
}
//
// Created by natha on 21/04/2024.
//
