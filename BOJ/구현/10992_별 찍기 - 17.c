#include <stdio.h>

int main(){
    int stars;
    int i,j;
    
    scanf("%d", &stars);
    
    for(i = 0;i<stars-1;i++){
        for(j=0;j<stars-i-1;j++) {
            printf(" ");
        }
        printf("*");
        if(i!=0) {
            for(j=0;j<2*i-1;j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<2*stars-1;i++) {
        printf("*");
    }
    printf("\n");
}
