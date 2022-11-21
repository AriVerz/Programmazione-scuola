/*Ripetere gli esercizi 8 e 9 usando il costrutto switch (selezione multipla)*/

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
    
    switch(op)
    {
        case '+':
            ris=x+y;
            printf("%.2f", ris);
        break;
            
        case '-':
            ris=x-y;
            printf("%.2f", ris);
        break;
            
        case '*':
            ris=x*y;
            printf("%.2f", ris);
        break;
            
        case '/':
            ris=x/y;
            printf("%.2f", ris);
        break;
        
        default:
            printf("Operatore sconosciuto");
        break;
    }
}
