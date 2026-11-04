#include<stdio.h>
#include<string.h>
    int main(){
        int N;
        scanf("%d", &N);
        int a[N];

        for(int i=0; i<N; i++){
            scanf("%d", &a[i]);
        }

        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(a[i]<a[j]){
                    int temp=0;
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        for(int i=0; i<N; i++){
            printf("%d ", a[i]);
        }

        return 0;
    }
