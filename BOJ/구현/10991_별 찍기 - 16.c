#include <stdio.h>

int main ()
{
    int stars;
    int i, j;
    scanf("%d",&stars);
    
    for (i = 1; i < stars; i++)
    {
        for (j = i; j < stars - 1; j++) {
            printf(" ");
        }/* 공백 */
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
