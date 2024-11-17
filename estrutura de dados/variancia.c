/* implemente um programa que calcule a média e a variância de um conjunto de N números reais, atendendo às seguintes condições:
- ler e armazenar os valores em um vetor de N posições (mínimo de 6 números).
- calcular a média e a variância com base nos valores do vetor.
- apresentar um menu com as opções: 1. Informar números, 2. Calcular, 3. Sair.
- o programa deve permanecer em execução até a opção Sair ser escolhida.
- informar ao usuário sobre opções inválidas.
- exibir o menu após cada operação concluída.
 */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// DEFININDO AS FUNÇÕES
void read_value(int n, float* v);
float calculate_mean(int n, float* v);
float calculate_variance(int n, float* v, float m);

int main() {
    setlocale(LC_ALL, "Portuguese");

    // INICIALIZAÇÃO DE VARIÁVEIS
    float* v;
    float med, var;
    int n;
    int option = -1; // INICIALIZADO COM -1 PARA GARANTIR QUE O LOOP SEJA EXECUTADO AO MENOS UMA VEZ

    while (option != 0) {
        wprintf(L"\tMENU\nEscolha uma opção:\n1 - Informe o tamanho do vetor e os números.\n2 - Calcular.\n0 - Sair\n\n");
        scanf("%d", &option);

        if (option == 1) {
            wprintf(L"Você escolheu a opção 1.\n");
            wprintf(L"Informe o tamanho do vetor (no mínimo 6): \n");
            scanf("%d", &n);

            if (n < 6) {
                wprintf(L"Tamanho inválido. O vetor deve ter no mínimo 6 elementos.\n");
                continue;
            }

            v = (float*)malloc(n * sizeof(float)); // ALOCANDO MEMÓRIA
            read_value(n, v); // CHAMANDO A FUNÇÃO PARA LER OS VALORES
        }

        else if (option == 2) {
            wprintf(L"Você escolheu a opção 2.\n");
            wprintf(L"Calculando... \n\n");
            med = calculate_mean(n, v); // CHAMANDO A FUNÇÃO PARA CALCULAR A MÉDIA
            wprintf(L"A média é: %f\n", med);
            var = calculate_variance(n, v, med); // CHAMANDO A FUNÇÃO PARA CALCULAR A VARIÂNCIA
            wprintf(L"A variância é: %f\n\n", var);
        }

        else if (option == 0) {
            wprintf(L"Execução encerrada.\n");
            free(v); // LIBERANDO A MEMÓRIA
            exit(0);
        }

        else {
            wprintf(L"Opção inválida.\n");
        }
    }

    return 0;
}

// FUNÇÃO PARA LER OS VALORES
void read_value(int n, float* v) {
    int i;
    wprintf(L"Informe os números: \n");
    for (i = 0; i < n; i++) {
        scanf("%f", &v[i]);
    }
}

// FUNÇÃO PARA CALCULAR A MÉDIA
float calculate_mean(int n, float* v) {
    int i;
    float s = 0.0;
    for (i = 0; i < n; i++) {
        s += v[i];
    }
    return s / n;
}

// FUNÇÃO PARA CALCULAR A VARIÂNCIA
float calculate_variance(int n, float* v, float m) {
    int i;
    float s = 0.0;
    for (i = 0; i < n; i++) {
        s += (v[i] - m) * (v[i] - m);
    }
    return s / n;
}
//
// Created by natha on 20/08/2024.
//
