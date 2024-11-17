#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// DEFININDO AS FUNÇÕES
void identify_typeof_triangle(float side1, float side2, float side3);
void calculate_hypotenuse(float leg1, float leg2);
void calculate_perimeter(float side1, float side2, float side3);

int main() {
setlocale(LC_ALL, "Portuguese");
// INICIALIZAÇÃO DE VARIÁVEIS
    int option = -1; // INICIALIZADO COM -1 PARA GARANTIR QUE O LOOP SEJA EXECUTADO AO MENOS UMA VEZ
    float leg1, leg2, side1, side2, side3;

    while (option != 0) {
        wprintf(L"\tMENU\nEscolha uma opção:\n1 - Identificar o tipo do triângulo.\n2 - Calcular a hipotenusa.\n3 - Calcular o perímetro do triângulo.\n0 - Sair\n\n");
        scanf("%d", &option);

        if (option == 1) {
            wprintf(L"Você escolheu a opção 1.\n");
            wprintf(L"Informe o comprimento dos três lados do triângulo: \n");
            scanf("%f %f %f", &side1, &side2, &side3);
            identify_typeof_triangle (side1, side2, side3); // CHAMANDO A FUNÇÃO
        }

        else if (option == 2) {
            wprintf(L"Você escolheu a opção 2.\n");
            wprintf(L"Informe o comprimento do primeiro e do segundo cateto: \n");
            scanf("%f %f", &leg1, &leg2);
            calculate_hypotenuse(leg1, leg2); // CHAMANDO A FUNÇÃO
        }

        else if (option == 3) {
            wprintf(L"Você escolheu a opção 3.\n");
            wprintf(L"Informe o comprimento dos três lados do triângulo: \n");
            scanf("%f %f %f", &side1, &side2, &side3);
            calculate_perimeter(side1, side2, side3); // CHAMANDO A FUNÇÃO
        }

        else if (option == 0) {
            wprintf(L"Execução encerrada.\n");
            exit(0);
        }

        else {
            wprintf(L"Opção inválida.\n");
        }
    }
    return 0;
    }

    // FUNÇÃO PARA IDENTIFICAR QUAL O TIPO DO TRIÂNGULO
    void identify_typeof_triangle (float side1, float side2, float side3){
    // VERIFICAÇÃO DA VALIDADE DOS VALORES INFORMADOS
        if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
            wprintf(L"Os valores informados são inválidos.\n");
        }
        else if (side1 == side2 && side2 == side3) {
            wprintf(L"O triângulo é equilátero.\n");
        }
        else if (side1 == side2 || side1 == side3 || (side2 == side3)) {
            wprintf(L"O triângulo é isósceles.\n");
        }
        else {
            wprintf(L"O triângulo é escaleno.\n");
        }
}

   // FUNÇÃO PARA CALCULAR A HIPOTENUSA
   void calculate_hypotenuse (float leg1, float leg2){
    float hypotenuse = sqrt((leg1 * leg1) + (leg2 * leg2)); // CALCULO DA HIPOTENUSA
    wprintf(L"A hipotenusa é: %.1f\n", hypotenuse);
}

   // FUNÇÃO PARA CALCULAR O PERÍMETRO DO TRIÂNGULO
   void calculate_perimeter (float side1, float side2, float side3){
    // VERIFICAÇÃO DA VALIDADE DOS VALORES INFORMADOS
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1){
        float perimeter = side1 + side2 + side3; // CALCULO DO PERIMETRO
        wprintf(L"O perímetro do triângulo é: %.1f\n", perimeter);
    }
    else {
        wprintf(L"Os valores informados são inválidos.\n");
    }
}
//
// Created by nathalia on 10/08/2024.
//
