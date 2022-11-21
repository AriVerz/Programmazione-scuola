#include <stdio.h>

int main()
{
    int x, r;
    printf("Inserisci un numero ");
    scanf("%d", &x);
    r=x%2;
    
    if(r==1)
        printf("Dispari\n");
    else
        printf("Pari\n");
        
}
