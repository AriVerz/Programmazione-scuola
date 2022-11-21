/*6) Scrivere un programma che legge tre valori e stabilisce se possono essere le lunghezze dei lati di un triangolo. 
   In caso affermativo, trova la tipologia del triangolo. Si deve determinare se il triangolo e':
    - equilatero
    - isoscele
    - scaleno
    - rettangolo.
   Tre valori rappresentano i lati di un triangolo se:
    - i lati sono positivi
    - ogni lato e' minore della somma degli altri due
    - ogni lato e' maggiore della differenza degli altri due */

#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Inserisci a ");
    scanf("%f", &a);
    printf("Inserisci b ");
    scanf("%f", &b);
    printf("Inserisci c ");
    scanf("%f", &c);
    
    if(a<b+c && b<a+c && c<a+b && a>0 && b>0 && c>0 && a>b-c && b>a-c && c>a-b)
    {
        if(a!=b && b!=c && c!=a)
            printf("Scaleno ");
        else if((a==b && a!=c) || (a!=b && b==c) || (a==c && a!=b))
            printf("Isoscele ");
        else if(a==b && b==c)
            printf("Equilatero");
        if(a*a==(b*b)+(c*c) || b*b==(a*a)+(c*c) || c*c==(a*a)+(b*b))
            printf("Rettangolo");
    }
    else 
        printf("Non è un triangolo");
}

