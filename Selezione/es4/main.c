#include <stdio.h>

int main()
{
    int x;
    printf("Inserisci x ");
    scanf("%d", &x);
    
    if(x>=0)
        printf("Valore assoluto: %d", x);
    else
        printf("Valore assoluto: %d", -x);
}
