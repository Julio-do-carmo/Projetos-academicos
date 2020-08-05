#include <bits/stdc++.h>
#include<conio.h>

#define COL 4
#define LIN 8
#define False 0
#define True 1

//NOME: Julio Do Carmo
//Algoritmo: Sistema de compras de passagens para onibus

//estrutura dos dados

void inicializa(char matriz[LIN][COL]);
void painel(char matriz[LIN][COL]);
void comprarpass(char matriz[LIN][COL]);
void info();
int menuop();
int linhaI();
int colunaJ();

int main(void){
    char matriz[LIN][COL];
    int opcao;
    int loopContinue=True;

    inicializa(matriz);     // Inicializa a matriz com os valores em '?' Livre.

    do{
        system("cls");      //limpa a tela.
        opcao = menuop();
        switch(opcao){
            case 1:
                system("cls");
                system("cls");
                painel(matriz);     //Mostrar mapa dos assentos.
                comprarpass(matriz);        //Realiza a compra e marca com um 'X' no lugar escolhido.
                break;
            case 2:
                system("cls");
                painel(matriz);
                getch(); // Retorna um caracter assim que o mesmo seja digitado.
                break;
            case 3:
                loopContinue = False;       //Sair do programa.
        }
    }while(loopContinue);
    getchar(); // lê um caracter do teclado.
    return 0;
}

void inicializa(char matriz[LIN][COL]){
    int i, j;

    for(i=0; i<=LIN; i++)
        for(j=1; j<=COL; j++)
            matriz[i][j] = '?';
}

void painel(char matriz[LIN][COL]){
    int i, j;
    printf("\n\n          MAPA DOS ASSENTOS   \n\n");
    printf("    ");

    for(i=0; i<=COL; i++)
        printf("%d   ", i);

    for(i=0; i<=LIN; i++){
        printf("\n %d\n", i);
        for(j=1; j<=COL; j++)
            printf("   (%c)", matriz[i][j]);
    }
    info();
}

int menuop(){
    int opcao=3;

    do{
        system("cls");
        printf("\n\n          MENU    \n\n");
        printf("     1 - Comprar Passagem     \n");
        printf("     2 - Mapa do Onibus       \n");
        printf("     3 - Sair                  \n\n");
        printf("        opcao: "); scanf("%d", &opcao);

        if(opcao <= 0 || opcao > 3){
            printf("\n\n\n  Digite somente valores disponiveis no menu!!");
            getch();
        }
    }while(opcao <= 0 || opcao > 3);
    return opcao;
}

void info(){        //informações do mapa.
    printf("\n\n\n      ? - Livre  X - Ocupado\n\n");
}

void comprarpass(char matriz[LIN][COL]){
    int lin1, col1;
    printf("\n      Escolher assento\n\n");
    lin1 = linhaI();
    col1 = colunaJ();

    if(matriz[lin1][col1] == '?'){
        matriz[lin1][col1] = 'X';
        printf("\n\n        Compra Efetuada!! \n\n **Precione qualquer tecla para voltar ao menu**");
    }
    else if(matriz[lin1][col1] == 'X')
        printf("\n\n        Assento Ocupado !! ");
    getch();
}

int linhaI(){       //Ler linha escolhida.
    int lin;
    printf("        linha: "); scanf("%d", &lin);
        if(lin > 8){
            printf("\t\n        Este assento nao existe! ");
        }
    return lin;
}

int colunaJ(){      //Ler coluna escolhida.
    int col;
    printf("        coluna: "); scanf("%d", &col);
        if(col > 4){
            printf("\t\n        Este assento nao existe!");
        }
    return col;
}