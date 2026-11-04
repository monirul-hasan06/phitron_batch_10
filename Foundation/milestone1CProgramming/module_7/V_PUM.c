#include<stdio.h>
    int main(){
        int N;
        scanf("%d", &N);
        for(int i=1; i<=N; i++){
            for(int j=i; j<=4; j++){
                if(j==4){
                    printf("PUM");
                    continue;
                }
                printf("%d ", j);
            }
            printf("\n");
        }
        return 0;
    }