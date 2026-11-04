#include<stdio.h>

    double avg(int N, double arr[]){
        double sum = 0.00;
        for(int i=0; i<N; i++){
            sum = sum + arr[i];
        }
        double avg = sum / N;
        return avg;
    }


    int main(){
        int N;
        scanf("%d", &N);
        double arr[N];

        for(int i=0; i<N; i++){
            scanf("%lf", &arr[i]);
        }

        printf("%.7lf", avg(N, arr));
        return 0;
    }
