/*Scrivere un programma che legga una frase introdotta da tastiera. La frase
`e terminata dall’introduzione del carattere di invio. La frase contiene solo
caratteri minuscoli e complessivamente al pi`u 100 caratteri. Il programma
dovr`a stampare su schermo le seguenti informazioni:
• per ognuna delle lettere dell’alfabeto, il numero di volte che la lettera
compare nella stringa
• il numero di consonanti presenti nella stringa
• il numero di vocali presenti nella stringa*/

#include <stdio.h>
#define MAX 100

int main(){

    char str_Lettere[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
    char str_Vocali[] = {'a', 'e', 'i', 'o', 'u', '\0'};
    char str_Consonanti[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z', '\0'};
    char str_Frase[MAX];
    int i = 0, p = 0;
    int array_Cont[26] = {0};
    int Cont_Vocali = 0;
    int Cont_Consonanti = 0;

    printf("Inserisci una frase senza spazi:\n");
    scanf("%s", str_Frase);

    printf("Lettere: \n");
    //check numero lettere
    for(i = 0; str_Frase[i] != '\0'; i++){
        for(p = 0; p<26; p++){
            if(str_Frase[i] == str_Lettere[p]){
                array_Cont[p]++;   
            }
        }
    }
    for(i = 0; i<26; i++)
        printf("%c) %d\n", str_Lettere[i], array_Cont[i]);
    
    //check vocali
    for(i = 0; str_Frase[i] != '\0'; i++){
        for(p = 0; p<5; p++){
            if(str_Frase[i] == str_Vocali[p]){
                Cont_Vocali++;
            }
        }
    }
    printf("n. Vocali: %d\n", Cont_Vocali);

    //check consonanti
    for(i = 0; str_Frase[i] != '\0'; i++){
        for(p = 0; p<21; p++){
            if(str_Frase[i] == str_Consonanti[p]){
                Cont_Consonanti++;
            }
        }
    }
    printf("n. Consonanti: %d\n", Cont_Consonanti);

}