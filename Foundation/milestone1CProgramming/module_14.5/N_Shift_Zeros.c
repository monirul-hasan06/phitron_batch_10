#include<stdio.h>

void shift_zeros(int N, int a[]){

        for(int i=0; i<N; i++){
        if(a[i]!=0){
            printf("%d ", a[i]);
        }
    }

        for(int i=0; i<N; i++){
        if(a[i]==0){
            printf("%d ", a[i]);
        }
    }
}

int main(){
        int N;
        scanf("%d", &N);

        int a[N];
        for(int i=0; i<N; i++){
            scanf("%d", &a[i]);
        }

        shift_zeros(N,a);

        return 0;
    }