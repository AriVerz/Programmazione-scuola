/*4. 
Scrivere un programma che data una stringa (s1) in input genera due stringhe (s2, s3) in questo modo:
s2 contiene le vocali presenti in s1, evitando le ripetizioni; 
s3 contiene le consonanti presenti in s1, evitando le ripetizioni.
Esempio:
s1: buongiorno	---> s1: uoi	s2: bngr*/

#include <stdio.h>
#define MAX 50
int main(){

    char array_Vocali[] = {'a', 'e', 'i', 'o', 'u', '\0'};
    char array_Consonanti[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z', '\0'};
    char str[MAX];
    int p = 0;
    int i = 0; 

    printf("Scrivi una parola: ");
    scanf("%s", str);

    printf("s2: ");

    for(i = 0; str[i] != '\0'; i++){ 
        for(p = 0; p<5; p++){
            if(str[i] == array_Vocali[p]){
                printf("%c", str[i]);
                array_Vocali[p] = 0;
            }
        }
    }

    printf("\t");
    printf("s3: ");

    for(i = 0; str[i] != '\0'; i++){ 
        for(p = 0; p<21; p++){
            if(array_Consonanti[p] == str[i]){
                printf("%c", str[i]);
                array_Consonanti[p] = 0;
            }
        }
    }
}