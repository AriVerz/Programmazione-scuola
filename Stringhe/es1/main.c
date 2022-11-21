/*Scrivere un programma che chiede all'utente di inserire una password.
La password deve contenere:
- almeno 8 caratteri
- almeno una lettera maiuscola
- almeno una lettera minuscola
- almeno una cifra
- almeno un simbolo di punteggiatura (. , ; : ? !)
- almeno un carattere speciale (@ # * $ %)
Se la password non rispetta tutti i requisiti si visualizza un messaggio di errore e si ripete la richiesa fino a quando la password non e' adeguata. 
Se la password e' corretta si visualizza un messaggio di accettazione.
*/

#include <stdio.h>
#include <string.h>
#define DIM 50

int main(){

    char array_Minuscole[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
    char array_Maiuscole[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
    int array_Numeri[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char array_Simboli[] = {'.', ',', ';', ':', '?', '!', '\0'};
    char array_Caratteri[] = {'@', '#', '*', '$', '%', '\0'};
    char array_Password[DIM];
    int vero = 0;
    int j = 0, i = 0;
    int lunghezza = 0;

   

    printf("Inserisci la password fino a 10 caratteri: ");
    scanf("%s", array_Password);
   
    if(strlen(array_Password)<8)
        lunghezza = 0;
    else
        lunghezza = 1;
    
    
    for(i = 0; vero == 0 && i<DIM; i++){     //check minuscole
        for(j = 0; vero == 0 && j<26; j++){
            if(array_Password[i] != array_Minuscole[j])
                vero = 0;
            else
                vero = 1;
        }
    }
    
    

    if(vero == 0)    
        printf("La password non soddisfa i requisiti di sicurezza");
    else{       //check maiuscole
        for(i = 0; vero == 0 && i<DIM; i++){
            for(j = 0; vero == 0 && j<26; j++){
                if(array_Password[i] != array_Maiuscole[j])
                    vero = 0;
                else
                    vero = 1;
            }
        }
    }

    if(vero == 0)    
        printf("La password non soddisfa i requisiti di sicurezza");
    else{       //check numeri
        for(i = 0; vero == 0 && i<DIM; i++){
            for(j = 0; vero == 0 && j<10; j++){
                if(array_Password[i] != array_Numeri[j])
                    vero = 0;
                else
                    vero = 1;
            }
        }
    }

    if(vero == 0)    
        printf("La password non soddisfa i requisiti di sicurezza");
    else{       //check simboli di punteggiatura
        for(i = 0; vero == 0 && i<DIM; i++){
            for(j = 0; vero == 0 && j<6; j++){
                if(array_Password[i] != array_Simboli[j])
                    vero = 0;
                else
                    vero = 1;
            }
        }
    }

    if(vero == 0)    
        printf("La password non soddisfa i requisiti di sicurezza");
    else{       //check caratteri speciali
        for(i = 0; vero == 0 && i<DIM; i++){
            for(j = 0; vero == 0 && j<5; j++){
                if(array_Password[i] != array_Caratteri[j])
                    vero = 0;
                else
                    vero = 1;
            }
        }
    }

    if(vero == 0 || lunghezza == 0)
        printf("La password non soddisfa i requisiti di sicurezza");
    else
        printf("Password salvata");

    return 0;
    
}