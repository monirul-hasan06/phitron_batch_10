#include<stdio.h>
    int main(){
        int n , star = 1;
        scanf("%d", &n);
        int space = n-1;
        for(int i=1; i<=n; i++){  //line
            for(int j=1; j<=space; j++){
                printf(" ");

            }
            for(int j=1; j<=star; j++){ //star
                printf("*");
            }
            printf("\n");
            star++;
            space--;
        }
        return 0;
    }