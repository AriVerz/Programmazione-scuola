#include <stdio.h>

int main()
{
    int zona;
    float val, imp;
    printf("Inserisci il valore della casa ");
    scanf("%f", &val);
    printf("Inserisci la zona ");
    scanf("%d", &zona);
    
    switch(zona)
    {
    case 1:
        imp= (val/100)*5;
        printf("L'importo della tassa è %.2f\n", imp);
    break;
    
    case 2:
        imp= (val/100)*10;
        printf("L'importo della tassa è %.2f\n", imp);
    break;
    
    case 3:
        imp= (val/100)*15;
        printf("L'importo della tassa è %.2f\n", imp);
    break;
    
    case 4:
        imp= (val/100)*20;
        printf("L'importo della tassa è %.2f\n", imp);
    break;
        
    default:
        printf("ERRORE\n");
    break;
    }
}

