/*implemente um programa que apresente um menu de opções para interagir com a navegação canvas, com os seguintes requisitos. 
- o usuário deve poder selecionar o caractere cursor de navegação.
- a interação deve ocorrer via setas do teclado.
- a tecla ESC deve encerrar a navegação e retornar ao menu.
- o programa só deve ser encerrado quando o usuário assim desejar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


// DEFINIÇÃO DE UMA VARIÁVEL GLOBAL P/ POSTERIOR CUSTOMIZAÇÃO PELO USUÁRIO
char cursorChar = '*';
// DEFINIÇÃO DO TAMANHO DA MATRIZ
const int height = 10;
const int width = 20;

// PROTOTIPAÇÃO DAS FUNÇÕES
void menu(int *option);
void customCharacter();
void canvasNavigation();
void initialize(char canvas[height][width]);
void print(char canvas[height][width]);
void moveRight(char canvas[height][width]);
void moveLeft(char canvas[height][width]);
void moveUp(char canvas[height][width]);
void moveDown(char canvas[height][width]);

const int specialkeyID = 224;
int position[2];
enum command { ESCAPE = 27, 
               leftArrowkey = 75, 
               rightArrowkey = 77, 
               upArrowkey = 72, 
               downArrowkey = 80 };

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    int option = -1;
    // CONDICIONAIS PARA O MENU
    while (option != 0) {
        menu(&option);
        switch (option) {
            case 1:
                wprintf(L"Você escolheu a opção 1.\n");
                customCharacter();
                break;

            case 2:
                wprintf(L"Você escolheu a opção 2.\n");
                canvasNavigation();
                break;

            case 0:
                wprintf(L"Execução encerrada.\n");
                break;

            default:
                wprintf(L"Opção inválida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}

// FUNÇÃO P/ O MENU
void menu(int *option) {
    wprintf(L"\tMENU DE OPÇÕES\n");
    wprintf(L"1. Escolha um caractere.\n");
    wprintf(L"2. Inicie a navegação canvas.\n");
    printf("0. Sair.\n");
    scanf("%d", option);
}

//FUNÇÃO P/ A CUSTOMIZAÇÃO DO CARACTERE
void customCharacter() {
    wprintf(L"Insira o caractere desejado para o cursor de navegação: \n");
    wscanf(L" %c", &cursorChar);
}

// FUNÇÃO P/ INICIALIZAR A MATRIZ COM O CARACTERE 
void initialize(char canvas[height][width]) {
    int h, w;
    for (h = 0; h < height; h++) {
        for (w = 0; w < width; w++) {
            if (h == 0 && w == 0) {
                canvas[h][w] = cursorChar; // POSICIONA O CARACTERE NA POSIÇÃO INICIAL
            } else {
                canvas[h][w] = '.';
            }
        }
    }
}

// FUNÇÃO P/ A SAÍDA DA MATRIZ
void print(char canvas[height][width]) {
    int h, w;
    system("cls");
    for (h = 0; h < height; h++) {
        if (h == 0) {
            printf("\n+");
            for (int i = 0; i < width; i++)
                printf("---");
            printf("+");
        }
        for (w = 0; w < width; w++) {
            if (w == 0)
                printf("\n|");
            printf(" %c ", canvas[h][w]);
            if (w == width - 1)
                printf("|");
        }
    }
    printf("\n+");
    for (int i = 0; i < width; i++)
        printf("---");
    printf("+\n");
    printf("\n > Utilize as setas para navegar! \n\tPressione ESC para sair.\n");
}

// FUNÇÃO MOVIMENTAR P/ DIREITA
void moveRight(char canvas[height][width]) {
    if (position[1] < width - 1) {
        canvas[position[0]][position[1]] = '.';
        position[1]++;
        canvas[position[0]][position[1]] = cursorChar;
    }
}

// FUNÇÃO MOVIMENTAR P/ ESQUERDA
void moveLeft(char canvas[height][width]) {
    if (position[1] > 0) {
        canvas[position[0]][position[1]] = '.';
        position[1]--;
        canvas[position[0]][position[1]] = cursorChar;
    }
}

// FUNÇÃO MOVIMENTAR P/ CIMA
void moveUp(char canvas[height][width]) {
    if (position[0] > 0) {
        canvas[position[0]][position[1]] = '.';
        position[0]--;
        canvas[position[0]][position[1]] = cursorChar;
    }
}

// FUNÇÃO MOVIMENTAR P/ BAIXO
void moveDown(char canvas[height][width]) {
    if (position[0] < height - 1) {
        canvas[position[0]][position[1]] = '.';
        position[0]++;
        canvas[position[0]][position[1]] = cursorChar;
    }
}

// FUNÇÃO P/ LER A ENTRADA DAS MOVIMENTAÇÕES E CONDICIONAIS PARA MOVER O CARACTERE
void canvasNavigation() {
    char canvas[height][width];
    initialize(canvas);
    position[0] = 0;
    position[1] = 0;

    int tecla = 0;

    while (tecla != ESCAPE) {
        print(canvas);

        while (!kbhit());

        tecla = getch();

        if (tecla == specialkeyID) {
            tecla = getch();
        }

        switch (tecla) {
            case leftArrowkey:
                moveLeft(canvas);
                break;
            case rightArrowkey:
                moveRight(canvas);
                break;
            case upArrowkey:
                moveUp(canvas);
                break;
            case downArrowkey:
                moveDown(canvas);
                break;
            case ESCAPE:
                wprintf(L"\n\nVocê saiu! Fim da execução do programa.\n\n\n");
                break;
            default:
                wprintf(L"\nComando inválido! [tecla = %d]\n", tecla);
                system("pause");
                break;
        }
    }
}

//
// Created by natha on 31/08/2024.
//
