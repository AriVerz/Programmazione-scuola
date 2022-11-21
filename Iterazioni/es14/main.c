/*Scrivere un programma che legge da tastiera due interi righe e colonne e stampa due tabelle delle dimensioni specificate e contenenti i numeri da 0 in avanti, fino al riempimento della tabella.

La prima tabella e' riempita riga per riga, partendo dalla riga 0 (prima riga), la seconda tabella e' riempita colonna per colonna partendo dalla colonna 0 (prima colonna), come negli esempi.

Si assume righe>0 e colonne>0.*/

#include <stdio.h>

int main(){

    int r = 0;
    int c = 0;
    int i = 0, j = 0;
    int var = 0;

    printf("Numero righe: ");
    scanf("%d", &r);
    printf("Numero colonne: ");
    scanf("%d", &c);


    for(i = 0; i<r; i++){
       for(j = 0; j<c; j++){
        printf("%d\t", var);
        var++;
       }
        printf("\n");
    }

    printf("\n");

     for(i = 0; i<r; i++){
        var = i;
       for(j = 0; j<c; j++){
        printf("%d\t", var);
        var += r;
       }
        printf("\n");
    }
}