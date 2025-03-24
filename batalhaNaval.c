#include <stdio.h>

#define linha 10
#define coluna 10
#define poderVertical 5
#define poderHorizontal 3

void inserirPoder(int tabuleiro[linha][coluna], int superPoder[poderHorizontal][poderVertical], int x, int y)
{

	if (x < 0 || x + poderVertical > linha || y + poderHorizontal > coluna || y < 0)
	{
		printf("Esse Poder nao cabe nessa posicao");
		return;
	}

	for (int i = 0; i < poderHorizontal; i++)
	{
		for (int j = 0; j < poderVertical; j++)
		{
			if (superPoder[i][j] == 1)
			{

				tabuleiro[x + i - 1][y + j - 2] = 1;
			}
		}
	}
}

void imprimirTabuleiro(int tabuleiro[linha][coluna])
{
	for (int i = 0; i < linha; i++)
	{
		for (int j = 0; j < coluna; j++)

		{

			printf("%2d", tabuleiro[i][j]);
		}

		printf("\n");
	}
}

int main()
{

	int tabuleiro[linha][coluna] = {0};
	int horizontal = 0, vertical = 0;
	int valido = 0;
	int cone[poderHorizontal][poderVertical] = {
		{0, 0, 1, 0, 0},
		{0, 1, 1, 1, 0},
		{1, 1, 1, 1, 1}};

	int cruz[poderHorizontal][poderVertical] = {
		{0, 0, 1, 0, 0},
		{1, 1, 1, 1, 1},
		{0, 0, 1, 0, 0}};

	int octaedro[poderHorizontal][poderVertical] = {
		{0, 0, 1, 0, 0},
		{0, 1, 1, 1, 0},
		{0, 0, 1, 0, 0}};

	int opcao, escolha, poderX, poderY;

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
		printf("Digite a casa na vertical(2 a %d): ", linha - 1);
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
		else if (tabuleiro[vertical][horizontal] == 3 || tabuleiro[vertical - 1][horizontal - 1] == 3 || tabuleiro[vertical - 2][horizontal - 2] == 3) // Verificaçao se a posiçao esta ocupada
		{
			printf("POSICAO OCUPADA , Favor digitar nova posicao\n");
		}
		else
		{

			valido = 1;
		}
	}

	// Posicionamento Navio4

	printf("O Navio4 Está nas casas : ");
	for (int i = 0; i < 3; i++)
	{

		tabuleiro[vertical][horizontal] = 3;
		horizontal--;
		vertical--;

		printf("[%d][%d], ", vertical + 1, horizontal + 1);
	}
	printf("\n\n");

	printf("NAVIOS POSICIONADOS COM SUCESSO\n\n");

	// Construção do tabuleiro

	imprimirTabuleiro(tabuleiro);

	printf("\n\n");
	// Começar a usar os poderes
	valido = 0; // para conseguir resetar os menus while

	int(*poderEscolhido)[poderHorizontal][poderVertical];

	while (!valido)
	{

		printf("Escolha qual poder voce deseja usar\n");
		printf("1 - Poder Cone\n");
		printf("2 - poder Cruz\n");
		printf("3 - poder Octaedro\n");
		printf("4 - SAIR\n");
		printf("Opcao: ");
		scanf("%d", &escolha);

		switch (escolha)
		{
		case 1:
			poderEscolhido = &cone;

			printf("Digite uma casa na Vertical: ");
			scanf("%d", &poderY);
			printf("Digite uma casa na Horizontal: ");
			scanf("%d", &poderX);

			inserirPoder(tabuleiro, *poderEscolhido, poderY, poderX);

			imprimirTabuleiro(tabuleiro);

			break;

		case 2:
			poderEscolhido = &cruz;

			printf("Digite uma casa na Vertical: ");
			scanf("%d", &poderY);
			printf("Digite uma casa na Horizontal: ");
			scanf("%d", &poderX);

			inserirPoder(tabuleiro, *poderEscolhido, poderY, poderX);

			imprimirTabuleiro(tabuleiro);

			break;

		case 3:
			poderEscolhido = &octaedro;

			printf("Digite uma casa na Vertical: ");
			scanf("%d", &poderY);
			printf("Digite uma casa na Horizontal: ");
			scanf("%d", &poderX);

			inserirPoder(tabuleiro, *poderEscolhido, poderY, poderX);

			imprimirTabuleiro(tabuleiro);

			break;

		case 4:
			printf("Saindo...\n");
			return 0;

		default:
			printf("Opcao invalida, tente novamente.\n");
			continue;
		}
	}

	return 0;
}
