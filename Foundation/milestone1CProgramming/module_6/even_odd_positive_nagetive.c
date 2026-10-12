#include<stdio.h>
    int main(){
        int N,Positive=0, Negative=0, Even=0, Odd=0;
        scanf("%d", &N);
        int arr[N];
        for(int i=0; i<N; i++){
            scanf("%d", &arr[i]);
        }
        for(int i=0; i<N; i++){
            if(arr[i]>0){
                Positive++;
            }if(arr[i]<0){
                Negative++;
            }if(arr[i]%2==0){
                Even++;
            }if(arr[i]%2!=0){
                Odd++;
            }
        }

        printf("Even: %d\n", Even);
        printf("Odd: %d\n", Odd);
        printf("Positive: %d\n", Positive);
        printf("Negative: %d\n", Negative);

    return 0;
    }
