#include <stdio.h>

int main()
{
    int zona;
    float val, imp;
    printf("Inserisci il valore della casa ");
    scanf("%f", &val);
    printf("Inserisci la zona ");
    scanf("%d", &zona);
    
    if(zona==1)
    {
        imp= (val/100)*5;
        printf("L'importo della tassa è %f\n", imp);
    }
    else
        if(zona==2)
        {
            imp= (val/100)*10;
            printf("L'importo della tassa è %f\n", imp);
        }
    else
        if(zona==3)
        {
            imp= (val/100)*15;
            printf("L'importo della tassa è %f\n", imp);
        }
    else
        if(zona==4)
        {
            imp= (val/100)*20;
            printf("L'importo della tassa è %f\n", imp);
        }
    else
        printf("ERRORE\n");
}

