#include <stdio.h>

int main()
{
    int somma, x, y, erog;
    printf("Inserisci la somma ");
    scanf("%d", &somma);
    x=somma/50;
    
    if(somma-(50*x)!=0 && somma-(50*x)>=20)
    {    
        y=(somma-(50*x))/20;
        erog= (50*x)+(20*y);
        printf("somma--> %d\n", somma);
        printf("banconote da 50: %d\n", x);
        printf("banconote da 20: %d\n", y);
        printf("Somma erogata: %d\n", erog);
    }   
    else 
    {
        erog= (50*x);
        printf("somma--> %d\n", somma);
        printf("banconote da 50: %d\n", x);
        printf("Somma erogata: %d\n", erog);
    }
        
    
}

