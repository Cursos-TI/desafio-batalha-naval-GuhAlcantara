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

void poderOctaedro(int octaedro)
{
}

void poderCruz(int cruz)
{
}

void poderCone(int cone)
{
}

int main()
{

    int tabuleiro[linha][coluna] = {0};
    int horizontal = 0, vertical = 0;
    int valido = 0;
    int cone, cruz, octaedro;

    printf("Batalha Naval\n");
    printf("Vamos Posicionar as peças\n");

    // navio1 - horizontal :
    while (!valido)
    {
        printf("Navio1 (ficará na Horizontal)\n");
        printf("Digite a casa na vertical(0 a %d): ", linha - 1);
        scanf("%d", &vertical);
        printf("Digite a casa na horizontal(0 a %d): ", coluna - 3);
        scanf("%d", &horizontal);

        // verificaçao se esta no limite do tabuleiro
        if (vertical < 0 || horizontal < 0 || vertical >= coluna || horizontal >= linha)
        {
            printf("Navio fora do tabuleiro, favor inserir numero valido\n");
        }
        else if (horizontal >= 8)
        {
            printf("Navio nao cabe nessa posicao\n");
        }
        else
        {
            valido = 1;
        }
    }

    valido = 0; // para conseguir resetar os menus while

    // Posicionanado navio1
    printf("O Navio1 Está nas casas : ");
    for (int i = 0; i < 3; i++)
    {

        tabuleiro[vertical][horizontal] = 3;
        horizontal++;

        printf("[%d][%d], ", vertical, horizontal - 1);
    }
    printf("\n\n");

    // navio2 - vertical :
    while (!valido)
    {
        printf("Navio2 (ficará na vertical)\n");
        printf("Digite a casa na vertical(0 a %d): ", linha - 3);
        scanf("%d", &vertical);
        printf("Digite a casa na horizontal(0 a %d): ", coluna - 1);
        scanf("%d", &horizontal);

        if (vertical < 0 || horizontal < 0 || vertical >= coluna || horizontal >= linha)
        {
            printf("Navio fora do tabuleiro , insira numero valido\n");
        }
        else if (vertical >= 8)
        {
            printf("Navio nao cabe nessa posicao\n");
        }
        else if (tabuleiro[vertical][horizontal] == 3 || tabuleiro[vertical + 1][horizontal] == 3 || tabuleiro[vertical + 2][horizontal] == 3) // verificaçao se local esta ocupado
        {
            printf("POSICAO OCUPADA , Favor digitar nova posicao\n");
        }
        else
        {

            valido = 1;
        }
    }

    valido = 0; // para conseguir resetar os menus while

    // posicionamento do navio2
    printf("O Navio2 Está nas casas : ");
    for (int i = 0; i < 3; i++)
    {

        tabuleiro[vertical][horizontal] = 3;
        vertical++;

        printf("[%d][%d], ", vertical - 1, horizontal);
    }
    printf("\n\n");

    // navio3 - Diagonal :
    while (!valido)
    {

        printf("Navio3 (Ficara na Diagonal)\n");
        printf("Digite a casa na vertical(0 a %d): ", linha - 1);
        scanf("%d", &vertical);
        printf("Digite a casa na horizontal(0 a %d): ", coluna - 3);
        scanf("%d", &horizontal);

        if (vertical < 0 || horizontal < 0 || vertical >= coluna || horizontal >= linha)
        {
            printf("Navio fora do tabuleiro, favor inserir numero valido\n ");
        }
        else if (horizontal >= 8 || vertical < 2)
        {
            printf("Navio nao cabe nessa posicao\n");
        }
        else if (tabuleiro[vertical][horizontal] == 3 || tabuleiro[vertical - 1][horizontal = 1] == 3 || tabuleiro[vertical - 2][horizontal + 2] == 3) // Verificaçao se a posiçao esta ocupada
        {
            printf("POSICAO OCUPADA , Favor digitar nova posicao\n");
        }
        else
        {

            valido = 1;
        }
    }

    valido = 0; // para conseguir resetar os menus while

    // Posicionamento navio3
    printf("O Navio3 Está nas casas : ");
    for (int i = 0; i < 3; i++)
    {

        tabuleiro[vertical][horizontal] = 3;
        horizontal++;
        vertical--;

        printf("[%d][%d], ", vertical + 1, horizontal - 1);
    }
    printf("\n\n");

    

    // navio4 Diagonal:
    while (!valido)
    {
        printf("Navio4 (Diagonal)\n");
        printf("Digite a casa na vertical(22 a %d): ", linha - 1);
        scanf("%d", &vertical);
        printf("Digite a casa na horizontal(2 a %d): ", coluna - 1);
        scanf("%d", &horizontal);

        if (vertical < 0 || horizontal < 0 || vertical >= coluna || horizontal >= linha)
        {
            printf("Navio fora do tabuleiro, favor inserir numero valido\n ");
        }
        else if (vertical < 2 || horizontal < 2)
        {
            printf("Navio nao cabe nessa posicao\n");
        }
        else if (tabuleiro[vertical][horizontal] == 3 || tabuleiro[vertical - 1][horizontal - 1] == 3 || tabuleiro[vertical - 2][horizontal - 2] == 3)  // Verificaçao se a posiçao esta ocupada
        {
            printf("POSICAO OCUPADA , Favor digitar nova posicao\n");
        }
        else
        {

            valido = 1;
        }
    }

    valido = 0;  // para conseguir resetar os menus while

    // Posicionamento Navio4 teste 2

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

            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}
