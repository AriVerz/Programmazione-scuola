/*Scrivere un programma che stampi la tavola pitagorica per valori da 1 a 10*/

#include <stdio.h>

int main(){

    int i = 1, j = 1;

    for(i = 1; i<11; i++){
        for(j = 1; j<11; j++){
            printf("%d\t", j*i);
        }
        printf("\n");
    }

}