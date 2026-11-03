#include<stdio.h>
#include<string.h>
    int main(){
        int A, B, C;
        char S,Q;
        scanf("%d %c %d %c %d", &A,&S,&B,&Q,&C);
            if(S=='+'){
                if(A+B==C){
                    printf("Yes");
                }else{
                    int d = A + B;
                    printf("%d", d);
                }
            }
            if(S=='-'){
                if(A-B==C){
                    printf("Yes");
                }else{
                    int d = A - B;
                    printf("%d", d);
                }
            }
            if(S=='*'){
                if(A*B==C){
                    printf("Yes");
                }else{
                    int d = A * B;
                    printf("%d", d);
                }
            }
        return 0;
    }