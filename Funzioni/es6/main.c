/*Creare un programma che permetta di cifrare e di decifrare una stringa
(considerare solo caratteri minuscoli e senza spazi) attraverso l’algoritmo
di cifratura di Cesare.Ogni lettera del testo in chiaro `e sostituita nel testo
cifrato dalla lettera che si trova k posizioni dopo nell’alfabeto. Il numero
k rappresenta la chiave (0 < k < 26). Per esempio, con k = 3 : ’a’
diventa ’d’, ’m’ diventa ’p’, ’z’ diventa ’c’. La stringa si decripta eseguendo
l’operazione inversa. Si scriva un programma che tramite apposite funzioni
permetta di:
• inserire la stringa
• criptare la stringa
• decriptarla
• stampare la stringa*/

#include <stdio.h>
#include <string.h>
#define MAX 50

void inserire_stringa(char str[]){
    

    printf("Inserisci frase senza spazi: ");
    scanf("%s", str);

}

void criptare_stringa(char str[], int costante, char str1[] ){
    int i;

    for(i = 0; i<4; i++){
        if(str[i] + costante < 'z'){
            str1[i] = str[i] + costante;
        }
        else
            str1[i] = str[i] + costante - 26;

     
    }
    
}
void decriptare_stringa(char str[], int costante, char str2[] ){
    int i;

    for(i = 0; i<4; i++){
        if(str[i] - costante < 'a'){
            str2[i] = str[i] - costante + 26;
        }
        else
            str2[i] = str[i] - costante;
    }
   
}

void stampa(char str[], char str1[], char str2[]){
    int i;

    printf("Stringa: ");
    
    printf("%.3s\n", str);
 

    printf("Stringa criptata: ");
   
        printf("%.3s\n", str2);
    

    printf("Stringa decriptata: ");
    
        printf("%.3s\n", str1);
    
}

int main(){

    
    int costante = 0;

    printf("Inserisci costante: ");
    scanf("%d", &costante);

    char str[4];
    inserire_stringa(str);
    char str2[4];
    criptare_stringa(str, costante, str2);
    char str1[4];
    decriptare_stringa(str2, costante, str1);

    stampa(str, str1, str2);

    return 0;
}