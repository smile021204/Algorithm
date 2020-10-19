#include <stdio.h>

int main(void) {
    int numberOfStars;
    int i, s;
    
    scanf("%d",&numberOfStars);
    
    for (i = 1; i <= numberOfStars; i++) {
        for (s = 1; s <= numberOfStars; s++) {
            if (s <= numberOfStars - i)
                    printf(" ");
                else
                    printf("*");
        }
        printf("\n");
    }
}
