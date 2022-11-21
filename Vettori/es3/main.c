/*Scrivere un programma che memorizzi in un array una sequenza di numeri
inserita dall’utente e stampi come output gli elementi di posizione pari*/

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

printf("Numeri di posizione pari:\n ");
    
    for(i = 0; i<n; i++){
        if(i%2==0)
            printf("%d) %d\n", i, vettore[i]);
    }
}