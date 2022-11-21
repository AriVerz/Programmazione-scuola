#include <stdio.h>

int main()
{
    float x, y, ris;
    char op;
    printf("Inserisci x ");
    scanf("%f", &x);
    printf("Inserisci y ");
    scanf("%f", &y);
    printf("Inserisci un operatore ");
    scanf("%s", &op);
    
    
    if(op=='+')
    {
        ris=x+y;
        printf("%f", ris);
    }
    else
        if(op=='-')
        {
            ris=x-y;
            printf("%f", ris);
        } 
    else
        if(op=='*')
        {
            ris=x*y;
            printf("%f", ris);
        }
    else
        if(op=='/')
        {
            ris=x/y;
            printf("%f", ris);
        }
    else
        printf("Operatore sconosciuto");
}

