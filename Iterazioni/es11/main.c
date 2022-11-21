/*11) Scrivere un programma che legge da tastiera un intero n maggiore di 0 e
    stampa n seguito da tutti i suoi divisori, come negli esempi.
    Se n e' primo, stampa il messaggio "n e' un numero primo".*/

#include <stdio.h>

int main(){
    
    int x = 0;
    int i = 0;
    int divisori = 0;
    
    printf("Inserisci un numero: ");
    scanf("%d", &x);
    i = x;
    printf("%d: ", x);
    
    while(i > 0){
        if(x%i == 0){
            printf("%d ", i);
            divisori++;
        }
        i--;
    }
    if(divisori<3)
        printf("\n%d è un numero primo", x);
    
    
}
