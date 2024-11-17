/* implemente um programa para calcular o número de arranjos de 𝑛 elementos tomados 𝑘 a 𝑘, com os seguintes requisitos:
- duas funções: uma para o cálculo do fatorial (recursiva) e outra para o cálculo do arranjo.
- permitir que o usuário informe 𝑛 (total de elementos) e 𝑘 (quantidade de elementos de interesse).
*/ 

#include <stdio.h>
#include <locale.h>

// PROTÓTIPO DAS FUNÇÕES
int factorial (int num);
int arrangement (int m, int k);

int main (){
    setlocale(LC_ALL, "Portuguese");
    int m, k;

    printf("digite o total de elementos:");
    scanf("%d", &m);

    printf("digite a quantidade de elementos de interesse:");
    scanf("%d", &k);

    if (m >= k && m >= 0 && k >= 0) {
        wprintf(L"o número de arranjos possíveis é: %d", arrangement(m,k));
    } else {
        wprintf(L"valores inválidos.");
    }
    return 0;
}


// FUNÇÃO PARA CALCULAR O FATORIAL DE UM NÚMERO
int factorial (int num) {
    if ((num == 0) || (num == 1)) return 1;
    else
        return factorial(num - 1) * num; }

// FUNÇÃO PARA CALCULAR O ARRANJO
int arrangement(int m, int k) {
    return factorial(m) / factorial(m - k);
}
//
// Created by natha on 24/08/2024.
//
