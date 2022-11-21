/*Scrivere un programma che legge da tastiera il valore di n,
legge da tastiera una sequenza di n interi, 
e  calcola i seguenti  valori:
- il minimo numero

- il massimo numero

- la somma n1 + n3 + n5 + ... (numeri in posizione dispari)

- la somma n2 + n4 + n6 + ... (numeri in posizione pari)

- la somma totale di tutti i numeri letti
*/

#include <stdio.h>

int main(){
    
    int x = 0;
    int n = 0;
    int min = 2000000;
    int max = -2000000;
    int somma = 0;
    int pari = 0;
    int dispari = 0;
    int val=0;


    
    
    printf("Quanti valori? ");
    scanf("%d", &n);
    
    while(val < n){
        printf("Inserire valore: ");
        scanf("%d", &x);
        
            if(x<min){
                min=x;
            }

            if(x>max){
                max=x;
            }
        
            if(x%2 == 0){
                pari += x;
            }


            if(x%2 != 0){
                dispari += x;
            }

            somma += x;
        
      val++;
    }     
    
    printf("Il minimo è %d\n", min); 
    printf("Il massimo è %d\n", max);
    printf("La somma dei numeri pari è %d\n", pari);
    printf("La somma dei numeri dispari è %d\n", dispari);
    printf("La somma è %d\n", somma);
}

