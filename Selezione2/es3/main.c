/*3) Scrivere un programma C che esegua le seguenti operazioni:
   - legga da tastiera tre variabili x, y e h;
   Se x, y e h sono tutte maggiori di 0, allora
     - calcoli l'area del trapezio di basi x e y e altezza h;
     - stampi a video le misure delle basi e dell'altezza e l'area del trapezio.
     - in modo che l'output abbia la forma seguente:
       Base1 = (valore di x)
       Base2 = (valore di y)
       Altezza = (valore di h)
       Area = (area calcolata)
    Altrimenti
     - visualizzi un messaggio di errore */
     
#include <stdio.h>

int main()
{
     float x, y, h, area;
     printf("Inserisci lato1 ");
     scanf("%f", &x);
     printf("Inserisci lato2 ");
     scanf("%f", &y);
     printf("Inserisci altezza ");
     scanf("%f", &h);
     
     if(x>0 && y>0 && h>0)
     {
         area= ((x+y)*h)/2;
         printf("Base1 = %.2f\n", x);
         printf("Base2 = %.2f\n", y);
         printf("Altezza = %.2f\n", h);
         printf("Area = %.2f", area);
     }
     else 
         printf("ERRORE");
}

