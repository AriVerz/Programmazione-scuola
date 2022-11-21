/*6) Realizzare un programma che calcoli il prodotto di due interi x ed y acquisiti da tastiera,  usando solo la somma. */

#include <stdio.h>

int main(){
    
    int x=0;
    int y=0;
    int somma=0;
    int i=0;
    printf("Inserisci x: ");
    scanf("%d", &x);
    printf("Inserisci y: ");
    scanf("%d", &y);
    
    while(i < y){
        somma += x;
        i++;
    }
    printf("Prodotto = %d\n", somma);
}