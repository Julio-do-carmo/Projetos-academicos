#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao=0;
    do
    {
        printf("\tDigite uma opcao do menu\n");
        printf("\t1 - Digitar notas\n");
        printf("\t2 - Imprimir media\n");
        printf("\t3 - Sair\n");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                printf("Pedir notas\n");
                break;
            case 2:
                printf("Imprimir Notas\n");
                break;
            case 3:
                printf("Sair\n");
                break;
            default:
                printf("Digite uma opcao valida\n");
        }
    }while(opcao !=3);
}