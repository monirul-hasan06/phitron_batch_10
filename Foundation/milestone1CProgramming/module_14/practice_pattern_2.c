#include<stdio.h>
    int main(){
        int n;
        scanf("%d", &n);

        int star = n;
        for(int i = 1; i<=n; i++){
            for(int j=1; j<=star; j++){
                printf("*");
            }
            printf("\n");
            star--;
            for(int k=1; k<=i; k++){
                printf(" ");
            }
        }

        return 0;
    }