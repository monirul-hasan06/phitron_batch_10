#include<stdio.h>
    int main(){
        int A,B,C,D, mul;
        scanf("%d %d %d %d", &A, &B, &C, &D);

        mul = A*B*C*D;
        int last_digit = mul/10;
        int result = last_digit%10;

        printf("%d", result);

        // mul % 10;
        // 280
        // 280%10 


        return 0;
    }