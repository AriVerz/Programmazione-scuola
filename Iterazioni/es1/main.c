/*1) Scrivere un programma che richieda in input una sequenza di n numeri interi e ne individui il massimo.*/

#include <stdio.h>

int main(){
    
    int i=0;
    int max=0;
    int n=0;
    int x=0;
    max=x;
    puts("Quanti valori? ");
    scanf("%d", &n);
    
    while(i<n){
        puts("Inserire valore: ");
        scanf("%d", &x);
        if(x>max){
            max=x;
        }
    i++;
    }
    printf("Il massimo è %d", max);    
}

