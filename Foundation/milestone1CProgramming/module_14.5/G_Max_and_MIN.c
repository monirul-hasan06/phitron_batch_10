#include<stdio.h>
#include<limits.h>

    void min_max(int N,int arr[]){
        int min=INT_MAX;
        int max=INT_MIN;

        for(int i=0; i<N; i++){
            if(arr[i]<min){
                min = arr[i];
            }
        }

        for(int i=0; i<N; i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }

        printf("%d %d", min, max);

    }
    int main(){
        int N;
        scanf("%d", &N);

        int arr[N];
        for(int i=0; i<N; i++){
            scanf("%d", &arr[i]);
        }

        min_max(N,arr);
        return 0;
    }