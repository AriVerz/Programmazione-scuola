/*Scrivere un programma che riceva in input una sequenza di N numeri
interi. I numeri sono memorizzati in un vettore. Il programma esegue le
seguenti operazioni:
• visualizza il vettore
• esegue uno spostamento (shift) a sinistra di una posizione del contenuto del vettore. Pertanto ogni elemento del vettore deve assumere
il valore dell’elemento immediatamente successivo all’interno del vettore. L’elemento di indice N-1 deve assumere il valore zero.
Ad esempio dato il vettore: 1 10 15 18
Il programma deve generare il vettore: 10 15 18 0
Il programma visualizza il vettore ottenuto.
• esegue uno spostamento (shift) a destra di una posizione del contenuto del vettore ottenuto nel passo precedente. Pertanto ogni elemento del vettore deve assumere il valore dell’elemento immediatamente precedente all’interno del vettore. L’elemento di indice 0 deve
assumere il valore zero.
Ad esempio dato il vettore: 10 15 18 0
Il programma deve generare il vettore: 0 10 15 18
Il programma visualizza il vettore ottenuto.
Nota. Nella definizione di ”destra” e ”sinistra” si immagini il vettore
stampato orizzontalmente, a partire dalla cella di indice 0.*/

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

    for(i = 0; i<(valore-1) ; i++)
       array[i] = array[i+1];
    array[valore-1] = 0;

    for(i = 0; i<valore; i++)
        printf("%d ", array[i]);
    printf("\n");
    for(i = valore-1; i>0; i--)
        array[i] = array[i-1];
    array[0] = 0;
    
    for(i = 0; i<valore; i++)
        printf("%d ", array[i]);
        
}