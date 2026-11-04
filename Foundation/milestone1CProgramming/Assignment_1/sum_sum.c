#include<stdio.h>
    int main(){
        int N, pos_sum=0, neg_sum=0;
        scanf("%d", &N);
        int V[N];
        for(int i=0; i<N; i++){
            scanf("%d", &V[i]);
        }

        for(int i=0; i<N; i++){
            if(V[i]>=0){
               pos_sum += V[i];
            }
            else if(V[i]<=0){
                neg_sum += V[i];
            }
        }
        printf("%d ", pos_sum);
        printf("%d ", neg_sum);
    return 0;
    }
