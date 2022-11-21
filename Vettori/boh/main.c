#include <stdio.h>
#define NUM 6
int main(){

    char str[NUM];
    int i = 0;

    for(i = 0; i<5; i++){
        printf("Inserisci lettera: ");
        scanf("%s", &str[i]);
        
        
    }
str[5] = '\0';
    for(i = 0; i<5; i++)
        printf("%c", str[i]);
}