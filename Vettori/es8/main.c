/*Scrivere un programma che riceva in input una sequenza di N numeri
interi. I numeri sono memorizzati in un vettore. Terminato l’inserimento
della sequenza di numeri, il programma deve verificare se gli elementi del
vettore sono tutti uguali tra loro.*/

#include <stdio.h>

int main(){

    int i = 0;
    int valore = 0;

    printf("Quanti valori inserire? ");
    scanf("%d", &valore);

    int array[valore];

    for(i = 0; i<valore; i++){
        printf("Inserisci valore: ");
        scanf("%d", &array[i]);
    }

    int uguale = 1;

    for(i = 0; i<(valore-1) && (uguale == 1); i++){
        if(array[i+1] == array[i])
            uguale = 1;
        else
            uguale = 0;
    }
    if(uguale == 0)
        printf("Gli elementi non sono tutti uguali tra loro");
    else
        printf("Gli elementi sono tutti uguali tra loro");



}