#include<stdio.h>
    int main(){
        int N;
        scanf("%d", &N);

        int star = (N*2) - 1;

        for(int i=0; i<N; i++){
            for(int j=0; j<i; j++){
                printf(" ");
            }

            for(int i=0; i<star; i++){
                printf("*");
            }
            printf("\n");
            star -= 2;
        }

        return 0;
    }