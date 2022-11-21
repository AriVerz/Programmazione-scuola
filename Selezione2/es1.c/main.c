/*1) Scrivere un programma che prenda in input la base e l'altezza di un triangolo.
   Se entrambi sono maggiori di 0, allora
     calcola e visualizza l'area del triangolo 
   altrimenti 
     visualizza un messaggio di errore. */
     
#include <stdio.h>

int main()
{
     float b, h, area;
     printf("Inserisci la base ");
     scanf("%f", &b);
     printf("Inserisci l`altezza ");
     scanf("%f", &h);
     
     if(b>0 && h>0)
     {
         area= (h*b)/2;
         printf("Area = %.2f", area);
     }
     else 
         printf("ERRORE");
}
