#include <stdio.h>
int pseudoCalculadora (int num1, int num2, char operador){
    if (operador == '+') {
        int soma = num1+num2;
    }
    else if (operador == '-'){
        int sub = num1-num2;
    }
    else if (operador == '/'){
        int div = num1/num2;
    }
    else if (operador == '*') {
        int mult = num1 * num2;
    }
}

int main (){
    int a, b;
    char simbolo;

    scanf("%d %d %c", &a, &b, &simbolo);

    printf("%d", pseudoCalculadora(a, b, simbolo));
}
//
// Created by natha on 20/04/2024.
//
