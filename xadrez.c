#include <stdio.h>

//Recursividade
void movTorre(int casas)
{
    if (casas > 0)
    {
        printf("Torre anda uma casa para direita. \n");
        movTorre(casas - 1);
    }
}

//Recursividade com loops aninhados
void movBispo(int casas)
{
    for (int i = 0; i < casas; i++)
    {
        printf("Bispo anda uma casa para cima. \n");
        for (int j = 0; j < 1; j++)
        {
            printf("Bispo anda uma casa para a esquerda. \n");
        }
    }
}

//Recursividade
void movRainha(int casas)
{
    if (casas > 0)
    {
        printf("Rainha anda uma casa para esquerda \n");
        movRainha(casas - 1);
    }
}

//Recursividade
void movCavalo(int casas)
{
    if (casas > 0)
    {
        printf("Cavalo anda uma casa para cima. \n");
        printf("Cavalo anda uma casa para cima. \n");
        printf("Cavalo anda uma casa para direita. \n");
        movCavalo(casas - 1);
    }
}

int main()
{
    // variaveis
    int escolha;
    int casas;
    int i = 0;

    // menu interativo para escolher peca
    printf("\n --- Escolha uma peça para mover --- \n");
    printf("1. Torre \n");
    printf("2. Bispo \n");
    printf("3. Rainha \n");
    printf("4. Cavalo \n");
    scanf("%d", &escolha);

    // escolha da peca
    switch (escolha)
    {
    case 1:

        movTorre(5);

        break;

    case 2:

        movBispo(5);
        break;

    case 3:

        movRainha(8);
        break;

    case 4:

        movCavalo(1);
        break;

    default:
        printf("Número inválido. \n");
        break;
    }
}