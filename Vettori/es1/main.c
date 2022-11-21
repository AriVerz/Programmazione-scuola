/*1. Scrivere un programma che memorizzi in un array e stampi una sequenza
di numeri inseriti dall’utente*/

#include <stdio.h>

int main(){

    int n = 0;
    int i = 0;

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    int vettore[n];

    for(i = 0; i<n; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &vettore[i]);
    }

    printf("Indice e elemento:\n");

    for(i = 0; i<n; i++)
        printf("%d) %d\n", i, vettore[i]);
    

}