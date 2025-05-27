#include <stdio.h>

int main()
{
    int escolha;
    int casas;
    int i = 0;

    // torre
    printf("\n --- Escolha uma peça para mover --- \n");
    printf("1. Torre \n");
    printf("2. Bispo \n");
    printf("3. Rainha \n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:

        while (i < 5){
            printf("Torre anda uma casa para direita. \n");
            i++;
        }

        break;

    case 2:

        do{
            printf("Bispo anda uma casa para cima e direita \n");
            i++;
        } while (i < 5);

        break;

    case 3:

        for (i = 0; i < 8; i++){
            printf("Rainha anda uma casa para esquerda \n");
        }
        break;

    default:
        printf("Número inválido. \n");
        break;
    }
}