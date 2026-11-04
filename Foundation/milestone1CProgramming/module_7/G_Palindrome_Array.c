#include<stdio.h>
    int main(){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);

        }

        int b[n];

        for(int i=n-1; i>=0; i--){
            b[n-1 -i] = arr[i];
        }

        int count = 0;

        for(int i=0; i<n; i++){
            if(arr[i]==b[i]){
                count++;
            }
        }

        if(count==n){
            printf("YES");
        }else{
            printf("NO");
        }

        return 0;
    }
