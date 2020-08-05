#include <bits/stdc++.h>

int opcao()
{
    int menu;
    printf("\nDigite uma opcao");
    printf("\n 1 - Inserir elemento");
    printf("\n 2 - Imprimir elementos lidos");
    printf("\n 3 - Sair\n");
    scanf("%d",&menu);
    return menu;
}

void ler(int *matriz)
{
	int valor;
	printf("Informe um valor\n");
	scanf("%d", matriz);
} 

int main()
{
	int i=0, j=0, L, C;
	int op, TAM;
	printf("Informe a quantidade de linhas e colunas:");
	scanf("%d %d", &L, &C);
	int matriz[L][C];
	do
	{
		op = opcao();
		switch(op)
		{
			case 1:
				if(j < C)
				{
					ler(&matriz[i][j++]);
				} else if (i < L-1)
				{
					i++;
					j=0;
					ler(&matriz[i][j++]);
				} else 
				{
					printf("Matriz Cheia\n");
				}
			break;
			case 2:
				for(int x=0;x<=i;x++)
				{
					for(int y=0; y<=j; y++)
					{
						if(y<C && x<i || x==i && y<j)
						{
							printf("%4d", matriz[x][y]);
						}
					}
					printf("\n");
				}
			break;
			case 3:
				return 0;
				break;
		}
	}while(op!=3);
}