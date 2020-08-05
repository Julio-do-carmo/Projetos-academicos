
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double valor[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Informe o valor %d:\n",i+1);
        scanf("%lf", &valor[i]);
    }
    printf("Valores em ordem inversa:\n");
    for(int i=4;i>-1;i--)
    {
        printf("%.2lf\n", valor[i]);
    }
    
    double media = 0;
    
    for(int i2=0; i2<=4; i2++)
    {
        media += valor[i2];
        
    }
    cout << fixed;
    cout <<"\nA media é:" << (media / 5) << endl;
    
    return 0;
}