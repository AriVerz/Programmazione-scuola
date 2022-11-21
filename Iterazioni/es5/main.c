/*5) Stampare tutti i numeri pari da 0 a 100.*/

#include <stdio.h>

int main(){
    int i=0;
    int pari=0;
    
    while(i<50){
        pari = (i+1)*2;
        printf("%d ", pari);
        i++;
    }
}
