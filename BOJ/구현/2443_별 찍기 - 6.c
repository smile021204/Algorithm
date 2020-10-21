#include <stdio.h>

int main()
{
    int numberOfStars;
    scanf("%d", &numberOfStars);
    for (int i=1;i<=numberOfStars;i++) {
        for(int j=numberOfStars-i;j>0;j--){
            printf(" ");
        }
        for(int j = 1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
