/*8) Scrivere un programma che legge n da tastiera e ne calcola il fattoriale (n!). 
   Esempio: n=4   fatt(n)=1*2*3*4=24
            n=1   fatt(n)=1
	    n=0   fatt(n)=1*/

#include <stdio.h>

int main(){
    
    int n = 1;
    int fattoriale = 1;
    int ris = 1;
    printf("Inserisci n!\n ");
    scanf("%d", &n);
    
    printf("%d! = ", n);
    
    if(n != 0){
        while(n >= 2){
            fattoriale = (n-1)+1;
            printf(" %d * ", fattoriale);
            ris = ris * n;
            n--;
        }
    }
    else 
        printf("0! = 1");
    
    printf("1 = %d\n", ris); 
}
