/*
Given a number N
. Print all prime numbers between 1 and N
inclusive.

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .
*/

#include<stdio.h>
    int main(){
        int N;
        scanf("%d", &N);
        for(int i=2; i<=N; i++){
            int isPrime = 1;
            for(int j=2; j*j<=i; j++){
                if(i%j==0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                printf("%d ", i);
            }
        }
        return 0;
    }