#include <bits/stdc++.h>
using namespace std;

int salario[10];
int maior(){
	int i=0, maior=salario[0];
	for(i=0;i<5;i++){
		if(maior<salario[i]){
			maior = salario[i];
		}
	}
	return maior;
}
int main ()
{
    int x=0, total=0, maior, i=0, valor;
    
    while(x<10)
    {
        printf("Digite o salario:\n");
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
    printf("Maior salario é:%d\n", maior);
    return 0;
}