#include <stdio.h>
    int main(){
        int N, count=0;
        scanf("%d", &N);
        if(N==1){
            printf("NO");
        }
        for(int i=2; i<=N-1; i++){
            if(N%i==0){
                count++;
            }
            }
        if(count>0){
            printf("NO");
        }else{
            printf("YES");
        }
        return 0;
    }