#include <stdio.h>
#define DIM 5

int main() {
int a [DIM];
int i;

for( i = 0; i < DIM; i++) {
printf(" Inserisci l’elemento di indice %d : " , i );
scanf ("%d" , &a[i]);
}
printf(" Indice   Elemento : \n" );
for( i = 0; i < DIM; i++) {
printf("%d  %d\n" , i , a[i]);
}}