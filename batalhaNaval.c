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


int main() {
   


    int tabuleiro[5][5];
        tabuleiro[0][0] = 1;
        tabuleiro[0][1] = 2;
        tabuleiro[0][2] = 3; 
        tabuleiro[0][3] = 4;
        tabuleiro[0][4] = 5;
        tabuleiro[1][0] = 6;
        tabuleiro[1][1] = 7;
        tabuleiro[1][2] = 8;
        tabuleiro[1][3] = 9; 
        tabuleiro[1][4] = 10; 
        tabuleiro[2][0] = 11; 
        tabuleiro[2][1] = 12; 
        tabuleiro[2][2] = 13; 
        tabuleiro[2][3] = 14; 
        tabuleiro[2][4] = 15; 
        tabuleiro[3][0] = 16; 
        tabuleiro[3][1] = 17; 
        tabuleiro[3][2] = 18; 
        tabuleiro[3][3] = 19; 
        tabuleiro[3][4] = 20; 
        tabuleiro[4][0] = 21; 
        tabuleiro[4][1] = 22; 
        tabuleiro[4][2] = 23; 
        tabuleiro[4][3] = 24; 
        tabuleiro[4][4] = 25;  
    
   
        
    


    return 0;
}
