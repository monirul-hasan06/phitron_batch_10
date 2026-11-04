#include<stdio.h>
    int main(){
        int a[3];
        for(int i=0; i<3; i++){
            scanf("%d", &a[i]);
        }
        int sum=0;
        for(int i=0; i<3; i++){
            sum += a[i];
        }
        printf("%d", sum);
        return 0;
    }