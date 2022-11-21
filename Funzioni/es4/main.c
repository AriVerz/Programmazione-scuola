/*Scrivere un programma che, utilizzando le funzioni, calcoli la media, il
massimo e il minimo di un array di numeri reali Utilizzare le funzioni:
leggi(): permette di inserire il vettore di numeri
media(): calcola e ritorna la media
max(): calcola e ritorna il valore massimo
min(): calcola e ritorna il valore minimo
stampa(): visualizza il vettore, la media e il massimo e il minimo*/

#include <stdio.h>

int media(int vettore[], int lunghezza){
    int i;
    int somma = 0;
    for(i = 0; i<lunghezza; i++)
        somma += vettore[i];
    return somma/lunghezza;
}

int* leggi(int vettore[], int lunghezza){
    int i;
    for(i = 0; i<lunghezza; i++){
        printf("Inserisci valore in posizione %d: ", i);
        scanf("%d", &vettore[i]);
    }
    return (int*)vettore;
}

int max(int vettore[], int lunghezza){
    int i;
    int massimo = -2000;
    for(i = 0; i<lunghezza; i++){
        if(vettore[i]>massimo)
            massimo = vettore[i];
    }
    return massimo;
}

int min(int vettore[], int lunghezza){
    int i;
    int minimo = 2000;
    for(i = 0; i<lunghezza; i++){
        if(vettore[i]<minimo)
            minimo = vettore[i];
    }
    return minimo;
}

void stampa(int vettore[], int lunghezza){
    int i;
    int massimo = 0;
    int med = 0;
    int minimo = 0;
    printf("Vettore: ");
    for(i = 0; i<lunghezza; i++){
        printf("%d\t", vettore[i]);
    }
    printf("\tMassimo: ");
    massimo = max(vettore, lunghezza);
    printf("%d", massimo);
    printf("\tMinimo: ");
    minimo = min(vettore, lunghezza);
    printf("%d", minimo);
    printf("\tMedia: ");
    med = media(vettore, lunghezza);
    printf("%d", med);
}

int main(){
    int lunghezza = 0;
    printf("Definisci lunghezza: ");
    scanf("%d", &lunghezza);
    int vettore[lunghezza];

    leggi(vettore, lunghezza); 
    media(vettore, lunghezza);
    max(vettore, lunghezza);
    min(vettore, lunghezza);

    stampa(vettore, lunghezza);
    
    return 0;
}
