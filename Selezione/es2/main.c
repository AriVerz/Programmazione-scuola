#include <stdio.h>

int main()
{
    int x, y;
    printf("Inserire x ");
    scanf("%d", &x);
    printf("Inserire y ");
    scanf("%d", &y);
    
    if(x>y)
        printf("%d\n", x);
    else
        printf("%d\n", y);
}
