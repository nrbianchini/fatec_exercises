#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(NULL));

    int n;
    scanf("%d", &n);

    int contagem[6] = {0, 0, 0, 0, 0, 0};

    for (int i = 0; i < n/2; i++) {
        int resultado = rand() % 4 + 1;
        int resultado2 = rand() % 2 + 5;
        contagem[resultado - 1]++;
        contagem[resultado2 - 1]++;
        printf("%d\n%d\n", resultado, resultado2);
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
