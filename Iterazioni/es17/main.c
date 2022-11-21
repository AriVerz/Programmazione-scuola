/*Realizzare un programma che stampi a video un rettangolo la cui cornice sia composta da asterischi * e il suo contenuto da caratteri ‘A’, come nell’esempio:*/

#include <stdio.h>

int main(){

    int i = 0, j = 0;
    int c = 0;
    int r = 0;

    printf("Righe: ");
    scanf("%d", &r);
    printf("Colonne: ");
    scanf("%d", &c);

    for(i = 0; i<r; i++){
        for(j = 0; j<c; j++){
            if(i == 0 || i == (r-1) || j ==0 || j == (c-1))
            printf("*");
             else
            printf("A");
        }
        printf("\n");
    }

}