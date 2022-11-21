#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x, x1, x2;
    printf("Inserire a ");
    scanf("%f", &a);
    printf("Inserire b ");
    scanf("%f", &b);
    printf("Inserire c ");
    scanf("%f", &c);
    delta=(b*b)-(4*a*c);
    
    if(delta<0)
        printf("Nessuna soluzione\n");
    else
        if(delta==0)
        {
            x=-b/(2*a);
            printf("%f\n", x);
        }
    else
    {
        x1=( -b + sqrt(b*b - 4*a*c) ) / (2*a);
        x2=( -b - sqrt(b*b - 4*a*c) ) / (2*a);
        printf("%f, %f\n", x1, x2);
    }
}
