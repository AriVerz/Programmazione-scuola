/*Scrivere un programma che permetta di inserire due vettori lunghi N e
stampi un terzo vettore i cui elementi sono la somma degli elementi dei
due vettori in input. Il programma utilizza 3 funzioni:
• Inserisci elementi nel vettore
• Calcola somma
• Stampa vettore*/

#include <stdio.h>

 
int* crea_Vettore(int vettore[], int lunghezza){
    int i = 0;
    for(i = 0; i<lunghezza; i++){
        printf("Inserisci valore alla posizione %d: ", i);
        scanf("%d", &vettore[i]);
    }
    return (int*)vettore;
}
int* somma(int vettore1[], int vettore2[], int vettore3[], int lunghezza){
    int i;
    for(i = 0; i<lunghezza; i++)
        vettore3[i] = vettore1[i] + vettore2[i];
    return (int*) vettore3;
}

void stampa(int vettore3[], int lunghezza){
    int i;
    for(i = 0; i<lunghezza; i++)
    printf("Vettore3[%d] = %d ", i, vettore3[i] );
}

int main(){
    int lunghezza = 0;

    printf("Inserisci lunghezza: ");
    scanf("%d", &lunghezza);

    int vettore1[lunghezza];
    int vettore2[lunghezza];
    int vettore3[lunghezza];

    crea_Vettore(vettore1, lunghezza);
    crea_Vettore(vettore2, lunghezza);
    somma(vettore1, vettore2, vettore3, lunghezza);

    stampa(vettore3, lunghezza);
}


