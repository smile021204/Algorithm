#include <stdio.h>

int main ()
{
    int stars;
    int i, j;
    scanf("%d",&stars);
    
    for (i = 1; i <= stars; i++)
    {
        for (j = stars - i; j > 0; j--){
            printf(" ");
        }
        for (j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = stars-1; i >= 1; i--)
    {
        for (j = stars - i; j > 0; j--){
            printf(" ");
        }
        for (j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}
