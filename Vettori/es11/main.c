/* Scrivere un programma che legga da tastiera una sequenza ordinata di N
numeri interi eventualmente intervallati da alcuni 0 e li memorizzi in un
vettore. Il programma deve generare un secondo vettore che compatta i
numeri contenuti nel primo vettore. In particolare:
• ogni numero che compare ripetuto nel primo vettore, deve comparire
una sola volta nel secondo vettore
• ogni numero uguale a zero presente nel primo vettore non deve comparire nel secondo vettore.
Il programma deve visualizzare il contenuto del secondo vettore. Ad esempio, si supponga N=10 e si consideri la sequenza di numeri 1 1 3 0 4 6
0 6 8 9 inseriti da tastiera. Il programma deve visualizzare 1 3 4 6 8 9*/

#include <stdio.h>
#define MAX 10000
int main(){

    int n = 0;
    int i = 0, p = 0;
    int array_numeri[MAX];

    for(i = 0; i<MAX; i++)
        array_numeri[i] = i;

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    int array_uno[n];

    for(i = 0; i<n; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &array_uno[i]);
    }

    for(i = 0; i<n; i++){ 
        for(p = 0; p<MAX; p++){
            if(array_uno[i] != 0){
                if(array_numeri[p] == array_uno[i] ){
                    printf("%d", array_uno[i]);
                    array_numeri[p] = 0;
                }
            }
        }
    }

}