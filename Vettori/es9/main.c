/*9. Scrivere un programma che riceva in input una sequenza di N numeri interi. I numeri sono memorizzati in un vettore. Terminato l’inserimento
della sequenza di numeri, il programma deve verificare se il vettore contiene una sequenza di numeri ordinata in modo stretta*/

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

    int crescente = 1;

    for(i = 0; i<(valore-1) && (crescente != 0); i++){
        if(array[i+1]>array[i])
            crescente = 1;
        else
            crescente = 0;
    }

    if(crescente == 0){
        for(i = 0; i<(valore-1) && (crescente != -1); i++){
            if(array[i+1]<array[i])
                crescente = 2;
            else
                crescente = -1;
        }
    }

    if(crescente == 1)
        printf("CRESCENTE\n");
    else if(crescente == 2)
        printf("DECRESCENTE\n");
    else if(crescente == 0 || crescente == -1)
        printf("SCEMO CHI LEGGE\n");

}