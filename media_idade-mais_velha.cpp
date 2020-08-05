#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int x=0, total=0, maior, i=0, valor;
    
    while(x<10)
    {
        printf("Digite a idade:\n");
        x++;
        scanf("%d", &valor);
        total = total + valor;
        if(i==0)
        {
            maior = valor;
        }
        if(valor > maior)
        {
            maior = valor;
        }
        i++;
    }
    printf("Média = %.1f\n", total/10.0);
    printf("Mais velha = %d\n", maior);
    return 0;
}