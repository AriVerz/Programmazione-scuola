#include <stdio.h>

int main()
{
    int x;
    printf("Inserisci un numero ");
    scanf("%d", &x);
    
    if(x>0)
        printf("Positivo\n");
    else
        if(x<0)
            printf("Negativo\n");
        else
            printf("Nullo\n");
}