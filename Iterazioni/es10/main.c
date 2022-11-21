/*Scrivere un programma che calcoli il MCD di due interi acquisiti da tastiera, notando che:

se

a>b>0 MCD(a,b) = MCD(b, a-b).
In pratica,

se a=b MCD=a;
se a>b pongo a=a-b e itero;
se a<b pongo b=b-a e itero.
Realizzare l'iterazione con il costrutto while.*/

#include <stdio.h>

int main(){

    int a = 0;
    int b = 0;
    printf("Inserisci a: ");
    scanf("%d", &a);
    printf("inserire b: ");
    scanf("%d", &b);

    while(a != b){
        if(a>b)
            a = a-b;
        else
            b = b-a;
    }
    printf("%d", a);
    
       

}