/*7) Realizzare un programma che calcoli la potenza di x elevato alla n (con x ed n interi acquisiti da tastiera) usando solo il prodotto.*/

#include <stdio.h>

int main(){
    
    int x=0;
    int n=0;
    int potenza=1;
    int i=0;
    printf("Inserisci x: ");
    scanf("%d", &x);
    printf("Inserisci n: ");
    scanf("%d", &n);
    
    while(i<n){
        potenza *= x;
        i++;
    }
    printf("La potenza di %d elevato a %d è %d", x, n, potenza);
}

