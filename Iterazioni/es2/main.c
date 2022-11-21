/*2) Scrivere un programma che richieda in input una sequenza di n numeri interi e ne individui i primi due massimi.*/

#include <stdio.h>

int main(){
    
    int i=0;
    int max=0;
    int n=0;
    int x=0;
    int max2=0;
    max2=x;
    max=x;
    puts("Quanti valori? ");
    scanf("%d", &n);
    
    while(i<n){
        puts("Inserire valore: ");
        scanf("%d", &x);
        if(x>max2){
            max2=x;
            if(max2>max){
                max2=max;
                max=x;
            }
        }
    i++;
    }
    printf("Il massimo è %d\n", max); 
    printf("Il massimo2 è %d\n", max2); 
}

