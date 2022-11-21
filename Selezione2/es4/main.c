/* 4) L'utente inserisce un anno ed il calcolatore verifica se e' bisestile.
Un anno e' bisestile se e' divisibile per 4 ma non per 100, 
oppure se e' divisibile per 400. */

#include <stdio.h>

int main()
{
    int anno;
    printf("anno --> ");
    scanf("%d", &anno);
    
    if((anno%4==0 && anno%100!=0) || anno%400==0)
        printf("L'anno %d e' bisestile", anno);
    else
         printf("L'anno %d non e' bisestile", anno);
}
