/*Chiesti in input i valori di r e di c, stampare a video un rettangolo (o quadrato se r=c) di r righe e c colonne di caratteri X.*/

#include <stdio.h>

int main(){

    int r = 0;
    int c = 0;
    int i = 0, j = 0;

    printf("Righe: ");
    scanf("%d", &r);
    printf("Colonne: ");
    scanf("%d", &c);

    for(i = 0; i<r; i++){
        for(j = 0; j<c; j++){
            printf("X");
        }
        printf("\n");
    }

}