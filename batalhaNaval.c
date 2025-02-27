#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

// Nível Novato - Posicionamento dos Navios
// Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
// Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
// Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

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
    int horizontal = 0 , vertical = 0 ;
    int navio1 = 0, navio2 = 0, navio3 = 0, navio4 = 0;

    
    printf("Batalha Naval\n");
    printf("Vamos Posicionar as peças\n");

    // navio1
    printf("Navio1 (ficará na Horizontal)\n");
    printf("Digite a casa na vertical: ");
    scanf("%d" , &vertical);
    printf("Digite a casa na horizontal: ");
    scanf("%d", &horizontal);   

    printf("O Navio1 Está nas casas : ");
    for (int i = 0; i < 1 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           
            
           tabuleiro[vertical][horizontal] = 3;
           ++horizontal;
           
           
           
           printf("[%d][%d], " ,vertical  , horizontal - 1);
            
        }
        printf("\n\n");
        
    }
        
    
    // tabuleiro[1][0] = 3;
    // tabuleiro[1][1] = 3;
    // tabuleiro[1][2] = 3;

    /*
    // navio2:
    printf("O Navio2 está na vertical e está ocupando duas casas nas coordenadas [7][1] ,[8][1] ,[9][1].\n");
    tabuleiro[7][1] = 3;
    tabuleiro[8][1] = 3;
    tabuleiro[9][1] = 3;
    // navio3
    printf("O Navio3 está na diagonal e está o ocupando tres casas na diagonal  nas coordenadas[4][3],[3][4], [2][5]. \n");
    tabuleiro[4][3]= 3;
    tabuleiro[3][4]= 3;
    tabuleiro[2][5]= 3;
 
     // navio4
    printf("O Navio4 está na diagonal e está o ocupando tres casas na diagonal  nas coordenadas[8][9],[7][8], [6][7]. \n");
    tabuleiro[8][9]= 3;
    tabuleiro[7][8]= 3;
    tabuleiro[6][7]= 3;
*/


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
