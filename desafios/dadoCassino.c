#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(NULL));

    int n;
    scanf("%d", &n);

    int contagem[6] = {0};

    for (int i=0; i<n; i++) {
        int resultado = rand() % 6 + 1;
        contagem[resultado -1]++;
        printf("%d\n", resultado);
    }

    for (int i = 0; i < 6; i++){
        double porcentagem  = (double)contagem[i] / n * 100.0;
        printf("%d: %.2f%%\n", i + 1, porcentagem);
    }

    return 0;
}
//
// Created by natha on 22/04/2024.
//
