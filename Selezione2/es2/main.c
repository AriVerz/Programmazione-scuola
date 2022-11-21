/*2) Scrivere un programma C che esegua le seguenti operazioni:
   - legga da tastiera due variabili x e y;
   Se x e y sono entrambi maggiori di 0, allora
     - calcoli l'area del rettangolo di lati x e y;
     - stampi a video le misure dei lati e l'area del rettangolo in modo che
     - l'output abbia la forma seguente:
       Lato1 = (valore di x)
       Lato2 = (valore di y)
       Area = (area calcolata)
    Altrimenti
      - visualizzi un messaggio di errore. */

#include <stdio.h>

int main()
{
     float x, y, area;
     printf("Inserisci lato1 ");
     scanf("%f", &x);
     printf("Inserisci lato2 ");
     scanf("%f", &y);
     
     if(x>0 && y>0)
     {
         area= x*y;
         printf("Lato1 = %.2f\n", x);
         printf("Lato2 = %.2f\n", y);
         printf("Area = %.2f", area);
     }
     else 
         printf("ERRORE");
}
