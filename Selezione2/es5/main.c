/*5) Il piano cartesiano e' suddiviso in quattro quadranti
numerati come segue:

            | Y
            |
            |
     II     |     I 
            | 
----------------------------------  X
          0 |
   III      |     IV
            |
            |

Scrivere un programma che dato in input un punto di coordinate (x,y)
visualizza se il punto si trova nell'origine, sull'asse x, sull'asse y,
nel quadrante I, nel quadrante II, nel quadrante III o nel quadrante IV.  */

#include <stdio.h>

int main()
{
    float x, y;
    printf("Inserire la coordinata x ");
    scanf("%f", &x);
    printf("Inserire la coordinata y ");
    scanf("%f", &y);
    
    if(x>0 && y>0)
        printf("I");
    else
        if(x<0 && y>0)
            printf("II");
        else
            if(x<0 && y<0)
                printf("III");
            else
                if(x>0 && y<0)
                    printf("IV");
                else
                    if(x==0 && y!=0)
                        printf("Asse Y");
                    else
                        if(x!=0 && y==0)
                            printf("Asse X");
                        else
                            printf("Origine");
    
}
