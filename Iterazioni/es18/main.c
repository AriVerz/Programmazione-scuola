/*Scrivere un programma che legge un intero n maggiore di 1 e genera una tabella di n righe e n colonne in cui:

la diagonale e' composta da 0
la parte sopra la diagonale e' composta X
la parte sotto la diagonale e' composta da Y*/

#include <stdio.h>

int main(){

    int n = 2;
    int i = 1, j = 1;
    int cont = 0;

    printf("Righe e colonne: ");
    scanf("%d", &n);
    

    for(i = 1; i<n; i++){
        cont += 1;
        for(j = 1; j<n; j++){
            if(i*j == i*i)
            printf("0");
            else 
                if(j > cont)
                printf("X");
            else
                printf("Y");
        }
        printf("\n");
    }

}