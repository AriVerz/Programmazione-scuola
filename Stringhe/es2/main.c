/*Scrivere un programma che date due stringhe (s1, s2) in input genera la stringa s3 composta da s1 e s2 concatenate. 
Esempio:
s1: buon	s2: giorno	--->	s3: buongiorno*/

#include <stdio.h>
#include <string.h>
#define MAX 50

int main(){

    char str1[MAX] ;
    char str2[MAX] ;
    

    printf("Prima parola: ");
    scanf("%s", str1);

    printf("Seconda parola: ");
    scanf("%s", str2);


    printf("%s", strcat(str1, str2));
}