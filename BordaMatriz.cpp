#include <bits/stdc++.h>
using namespace std;
#define TAM 3
int main()
{
    int tam, i, j, flag = 1;
    printf("Digite o tamanho da matriz quadrada:\n");
    scanf("%d", &tam);
    int mat[tam][tam];

    for (i = 0; i < tam;i++){
        for (j = 0; j < tam; j++){
            printf("Digite matrix[%d][%d]: ",i+1 ,j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(i==j){
                if(mat[i][j]!=1){
                    flag = 0;
                }
            } else {
                if(mat[i][j]!=0){
                    flag = 0;
                }
            }
        }
    }

    flag = 1;
    for(i=0;i<TAM;i++)
    {
        for(j=0;j<TAM;j++)
        {
            if(i==j)
            {
                if(mat[i][j]!=1)
                {
                    flag = 0;
                }
            } else
            {
            if(mat[i][j]!=0)
            {
                flag = 0;
            }
        }
    }
}
    if(flag==0)
    {
        printf("Não é identidade\n");
    }
    for(i=0;i<TAM;i++) 
    {
        if(i==0 || i==TAM-1)
        {
            for(j=0;j<TAM;j++)
            {
                printf("%4d",mat[i][j]);
            }
        } else
        {
            printf("%4d\t%4d",mat[i][0],mat[i][TAM-1]);
        }
    }
}