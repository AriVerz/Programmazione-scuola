#include <stdio.h>

int main()
{
    float x, y, z;
    printf("Inserisci x ");
    scanf("%f", &x);
    printf("Inserisci y ");
    scanf("%f", &y);
    printf("Inserisci z ");
    scanf("%f", &z);
    
    if(x>y)
    {
        if(x>z)
            printf("%f\n", x);
        else
            printf("%f\n", z);
    }
    else
        if(y>z)
            printf("%f\n", y);
        else
            printf("%f\n", z);
}
