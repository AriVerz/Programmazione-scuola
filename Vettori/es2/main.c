/*Scrivere un programma che stampi in ordine inverso una sequenza di numeri inseriti dall’utente memorizzandola in un array.*/

#include <stdio.h>

int main(){

    int n = 0;
    int i = 0;

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    int vettore[n];

    for(i = 0; i<n; i++){
        printf("Inserire un numero: ");
        scanf("%d", &vettore[i]);
    }

    printf("Numeri inseriti:\n");

    for(i = (n-1); i>=0; i--)
        printf("%d) %d\n", i+1, vettore[i]);
}