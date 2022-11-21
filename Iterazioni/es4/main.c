/*4) Scrivere un programma che richieda in input una sequenza di interi conclusa da 0 e ne calcoli la somma.*/

#include <stdio.h>

int main(){
    int i = 1;
    int somma = 0;
    
    for(i = 1; i != 0;){
        printf("Inserisci valore ");
        scanf("%d", &i);
        somma += i;
    }
    printf("Somma = %d\n", somma);
}
