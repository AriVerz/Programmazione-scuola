/* Scrivere un programma che legge da tastiera un mese espresso come numero (da 1 a 12), e restituisce il numero di giorni in quel mese. 
Utilizzare il costrutto switch aggregando i casi con lo stesso esito. */

#include <stdio.h>

int main()
{
    int mese;
    printf("Inserire il mese ");
    scanf("%d", &mese);
    
    switch(mese)
    {
        case 2:
            printf("28");
        break;
        
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30");
        break;
        
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31");
        break;
        
        default:
            printf("ERRORE: mese inesistente");
        break;
    }
}
