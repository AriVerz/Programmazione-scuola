/*Scrivere un programma che chiede all'utente di inserire un carattere e una lunghezza. 
Poi crea una stringa di tale lunghezza composta dal carattere inserito e dai caratteri successivi nell'alfabeto, fino a completare la stringa. 
Esempio:
carattere: 'd'	lunghezza: 6	--->	defghi
*/

#include <stdio.h>

int main(){

    char carattere = 0;
    int lunghezza = 0;
    char str_Alfabeto[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
    int i = 0, j = 0;

    printf("Inserire un carattere: ");
    scanf("%s", &carattere);

    printf("Inserire la lunghezza desiderata: ");
    scanf("%d", &lunghezza);

    for(i = 0; i<26; i++){
        if(str_Alfabeto[i] == carattere){
            printf("carattere: '%c'\t", carattere);
            printf("\tlunghezza: %d\t", lunghezza);
            for(j = i; j < i + lunghezza; j++)
                printf("%c", str_Alfabeto[j]);
        }
            
    }
}


