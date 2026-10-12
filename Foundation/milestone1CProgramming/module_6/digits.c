#include<stdio.h>
    int main(){
        int T;
        scanf("%d", &T);
        while(T--){
            int arr[10];
            for(int i=0; i<10; i++){
                scanf("%d", &arr[i]);
            }
            for(int i=10; i<=1; i++){
                printf("%d", arr[i]);
            }
        }
    return 0;
    }
