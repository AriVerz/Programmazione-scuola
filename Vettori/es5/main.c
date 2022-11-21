/*Scrivere un programma che memorizzi in un array una sequenza di numeri
inserita dall’utente e stampi il valore massimo*/

#include <stdio.h>

int main(){

    int n = 0;
    int i = 0;
    int MAX = -2000000;

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    int vettore[n];

    for(i = 0; i<n; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &vettore[i]);
    }

    for(i = 0; i<n; i++){
        if(vettore[i]>MAX)
            MAX = vettore[i];
    }
    printf("Massimo: %d\n", MAX);


    
}