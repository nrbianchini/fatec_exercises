#include <stdio.h>

int DesenhaLinha (int contador){
    char simbolo = '=';
    for(int i = 1; i <= contador; i++){
    printf("%c", simbolo);
    }
}

int main (){
    int num;
    scanf("%d", &num);

    DesenhaLinha(num);
}
//
// Created by natha on 21/04/2024.
//
