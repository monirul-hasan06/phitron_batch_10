#include<stdio.h>
    int main(){
        int N,Q;
        scanf("%d %d", &N, &Q);

        int A[N];
        for(int i=0; i<N; i++){
            scanf("%d", &A[i]);
        }


        while(Q--){
            int X;
            scanf("%d", &X);
            for(int i=0; i<N; i++){
                for(int j=i+1; j<N; j++){
                if(A[i] == X){
                    printf("fount\n");
                    
                    }
                }
            }
            printf("not found\n");
        }

        return 0;
    }