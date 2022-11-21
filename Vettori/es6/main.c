/*Scrivere un programma che fa inserire una sequenza di numeri all’utente
e un numero da cercare. Dopo aver esaminato la sequenza di numeri il
programma deve stampare se il numero da cercare `e presente o no.*/

#include <stdio.h>

int main(){

    int n = 0;
    int i = 0;
    int numero = 0;
    int presente = 0;
    
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    int vettore[n];

    for(i = 0; i<n; i++){
        printf("Inserire un numero: ");
        scanf("%d", &vettore[i]);
    }

    printf("Quale numero cercare?\n");
    scanf("%d", &numero);

    for(i = 0; i<n; i++){
        if(vettore[i] == numero)
           presente = 1; 
    }
    if(presente == 1)
        printf("Il numero cercato è presente");
    else 
        printf("Il numero cercato non è presente");
}
