#include<stdio.h>
    int main(){
        int N,i;
        scanf("%d", &N);
        for(i=1; i<=N; i++){
            printf("%d ", i);
            if(i%5==0){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }
        return 0;
    }