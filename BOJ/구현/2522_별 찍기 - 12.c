#include <stdio.h>

int main ()
{
    int stars;
    int i, j, s;
    scanf("%d",&stars);

    for (i = 1; i <= stars; i++) {
        for(s = stars - i; s >= 1; s--) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = stars - 1; i >= 1; i--) {
        for(s = stars - i; s >= 1; s--) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
