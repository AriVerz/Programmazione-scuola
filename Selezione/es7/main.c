#include <stdio.h>
#define PI 3.14

int main()
{
    float r, c;
    printf("Inserisci il raggio ");
    scanf("%f", &r);
    
    if(r>0)
    { 
        c=2*PI*r;
        printf("Circonferenza= %f\n", c);
    }
    else
        printf("Il raggio deve essere maggiore di 0\n");
}
