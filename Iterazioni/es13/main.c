/* Scrivere un programma che legge da tastiera un intero n maggiore di 0.
    e stampa i numeri interi da 0 a n, quattro per riga.

    Per incolonnare i numeri si puo' usare:
    - il carattere TAB \t
      printf("%d\t", x);

    - Assumendo che gli interi non abbiano piu' di sei cifre, 
      usare la specifica di formato "%6d", che stampa un intero usando 6 caratteri:
      printf("%6d", x);
      Se x e' uguale a 1234, x viene preceduto da due spazi, in modo da stampare complessivamente sei caratteri.*/

#include <stdio.h>

int main(){

    int n = 0;
    int i = 0;
    int cost = 0;

    printf("Inserisci numero: ");
    scanf("%d", &n);

    for(i = 0; i<(n+1); i++){
        printf("%d\t", i);
        cost++;
        if(cost == 4){
            printf("\n");
            cost = 0;
        }
    }
}