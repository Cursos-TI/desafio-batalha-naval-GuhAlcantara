#include <stdio.h>


// Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
// Sugestão: Expanda o tabuleiro para uma matriz 10x10.
// Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
// Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

// Nível Mestre - Habilidades Especiais com Matrizes
// Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
// Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
// Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

// Exemplos de exibição das habilidades:
// Exemplo para habilidade em cone:
// 0 0 1 0 0
// 0 1 1 1 0
// 1 1 1 1 1

// Exemplo para habilidade em octaedro:
// 0 0 1 0 0
// 0 1 1 1 0
// 0 0 1 0 0

// Exemplo para habilidade em cruz:
// 0 0 1 0 0
// 1 1 1 1 1
// 0 0 1 0 0

#define linha 10
#define coluna 10

int main()
{

    int tabuleiro[linha][coluna] = {0};
    int soma = 0;
    int horizontal = 0, vertical = 0;
    // int navio1 = 0, navio2 = 0, navio3 = 0, navio4 = 0;

    printf("Batalha Naval\n");
    printf("Vamos Posicionar as peças\n");

    // navio1 - horizontal :
    printf("Navio1 (ficará na Horizontal)\n");
    printf("Digite a casa na vertical: ");
    scanf("%d", &vertical);
    printf("Digite a casa na horizontal: ");
    scanf("%d", &horizontal);

    printf("O Navio1 Está nas casas : ");
    for (int i = 0; i < 3; i++)
    {

        tabuleiro[vertical][horizontal] = 3;
        horizontal++;

        printf("[%d][%d], ", vertical, horizontal - 1);
    }
    printf("\n\n");

    // navio2 - vertical :
    printf("Navio2 (ficará na vertical)\n");
    printf("Digite a casa na vertical: ");
    scanf("%d", &vertical);
    printf("Digite a casa na horizontal: ");
    scanf("%d", &horizontal);

    printf("O Navio2 Está nas casas : ");
    for (int i = 0; i < 3; i++)
    {

        tabuleiro[vertical][horizontal] = 3;
        vertical++;

        printf("[%d][%d], ", vertical - 1, horizontal);
    }
    printf("\n\n");

    // navio3:
    printf("Navio3 (ficará na diagonal para a direita)\n");
    printf("Digite a casa na vertical: ");
    scanf("%d", &vertical);
    printf("Digite a casa na horizontal: ");
    scanf("%d", &horizontal);

    printf("O Navio3 Está nas casas : ");
    for (int i = 0; i < 3; i++)
    {

        tabuleiro[vertical][horizontal] = 3;
        horizontal++;
        vertical--;

        printf("[%d][%d], ", vertical + 1, horizontal - 1);
    }
    printf("\n\n");

    // navio4:
    printf("Navio4 (ficará na diagonal para a esquerda)\n");
    printf("Digite a casa na vertical: ");
    scanf("%d", &vertical);
    printf("Digite a casa na horizontal: ");
    scanf("%d", &horizontal);

    printf("O Navio4 Está nas casas : ");
    for (int i = 0; i < 3; i++)
    {

        tabuleiro[vertical][horizontal] = 3;
        horizontal--;
        vertical--;

        printf("[%d][%d], ", vertical + 1, horizontal + 1);
    }
    printf("\n\n");

    // Construção do tabuleiro
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)

        {
            soma = 0;
            soma++;

            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}
