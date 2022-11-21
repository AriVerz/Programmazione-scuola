#include <stdio.h>

int main()
{
    int x, y, r;
    printf("Inserisci x ");
    scanf("%d", &x);
    printf("Inserisci y ");
    scanf("%d", &y);
    r=x%y;
    
    if(r==0)
        printf("%d è multiplo di %d\n", x, y);
    else
        printf("%d non è multiplo di %d\n", x, y);
}