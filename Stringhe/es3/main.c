/*3. 
Scrivere un programma che data una stringa (s1) in input genera due stringhe (s2, s3) in questo modo:
s2 contiente la prima meta' dei caratteri di s1;
s3 contiente la seconda meta' dei caratteri di s1.
Esempio:
s1: buongiorno	--->	s2: buong	s3: iorno	*/

#include <stdio.h>
#define MAX 50
int main(){

    char str1[MAX];
    char str2[MAX];
    char str3[MAX];
    int s2 = 0, s1 = 0;
    int i = 0, j= 0;

    printf("Digita una parola: ");
    scanf("%s", str1);

    for(i = 0; str1[i] != '\0'; i++)
        s1++;

    s2= s1/2;
    

    for(i = 0; i<s2; i++)
        str2[i] = str1[i];
    
    for(i = s2; i<=s1; i++)
        str3[i-s2] = str1[i];
        

    printf("s1: %s\n", str1);
    printf("s2: %s\n", str2);
    printf("s3: %s\n", str3);
    

}