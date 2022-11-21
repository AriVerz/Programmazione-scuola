/* Si scriva un programma C che richiami tre funzioni:
• Inserimento degli elementi in un vettore
• Funzione cerca, che ricerchi la presenza di un elemento in un vettore
di interi.
La funzione riceve in ingresso tre parametri:
– un vettore di interi v[] nel quale ricercare il valore;
– un un valore intero N che indica quanti elementi contiene il vettore;
– il valore intero x che deve essere ricercato.
La funzione deve restituire un valore intero, ed in particolare:
– se il valore x `e presente nel vettore, allora la funzione restituisce
l’indice della posizione alla quale si trova tale valore;
– se il valore x `e presente pi`u volte, si restituisca l’indice della
prima occorrenza;
– se il valore x non `e presente nel vettore, si restituisca -1.*/

#include <stdio.h>

void leggi (int vettore[], int lunghezza){
    int i;
    for(i = 0; i<lunghezza; i++){
        printf("Inserisci valore in posizione %d: ", i);
        scanf("%d", &vettore[i]);
    }
}

void cerca(int vettore[], int lunghezza, int valore){
    int i, j; 
    for(i = 0; vettore[i] == valore && i<lunghezza; i++){
        if(vettore[i] == valore)
            printf("Il numero è presente in posizione %d", i);
        else 
            printf("Il numero cercato non è presente");
        }
    }
}

int main(){
    int lunghezza = 5;
    int vettore[lunghezza];
    int valore = 0;

    leggi(vettore, lunghezza);

    printf("Inserisci un valore da cercare: ");
    scanf("%d", &valore);

    cerca(vettore, lunghezza, valore);
    return 0;
}
