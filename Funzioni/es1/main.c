/*Scrivere un programma che, sfruttando le funzioni, permetta di calcolare l’area di un cerchio o di un quadrato. L’utente inserisce un numero,
dichiarando se si tratta del raggio di un cerchio o del lato di un quadrato.
Se l’utente inserisce un numero negativo viene visualizzato un errore, altrimenti il sistema calcola l’area in modo appropriato.*/

#include <stdio.h>
#define PI 3.14

int circle(int x){
    return x*x*PI;
}

int square(int x){
    return x*x;
}

int main(){                

    int x = 0;
    char choice = 0;
    int circ = 0;
    int sqar = 0;

    printf("Insert x: ");
    scanf("%d", &x);

    if(x>0){
        printf("Do you want to calculate square (type s) area or circle area (type c)? ");
        scanf("%c", &choice);
        scanf("%c", &choice);
        if(choice == 'c'){
            circ = circle(x);
            printf("Circle area = %d  ", circ);
        }
        else{
            sqar = square(x);
            printf("Square area = %d  ", sqar);
        }
    }
    else
        printf("ERROR, insert a valid x");

}