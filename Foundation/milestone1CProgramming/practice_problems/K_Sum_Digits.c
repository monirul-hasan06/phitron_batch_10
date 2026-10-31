#include<stdio.h>
    int main(){
        int N;
        scanf("%d", &N);
        char a[1000001];

        scanf("%s", a);


        int sum = 0;
        for(int i=0; i<N; i++){
            sum += a[i] - '0';
        }

        printf("%d", sum);
        return 0;
    }