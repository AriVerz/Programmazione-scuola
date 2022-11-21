/*3) Realizzare un programma che calcoli la somma dei primi N numeri naturali, dove N e' un intero acquisito da tastiera.
	Utilizzare prima il costrutto while, poi do-while, e poi for. */

#include <stdio.h>

int main(){
    
    int x = 0;
    int n = 0;
    int i = 0;
    int somma = 0;
    printf("Quanti valori? ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        printf("Inserisci valore: ");
        scanf("%d", &x);
        somma += x;
    }
    printf("Somma = %d\n", somma);    
}

