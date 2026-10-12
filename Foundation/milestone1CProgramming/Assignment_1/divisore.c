/**
 * Given a number N. Print all the divisors of N in ascending order.

Input
Only one line containing a number N (1 ≤ N ≤ 104).

Output
Print all positive divisors of N, one number per line.
 */

#include<stdio.h>
    int main(){
        int N;
        scanf("%d", &N);
        for(int i=1; i<=N; i++){
            if(N%i==0){
                printf("%d\n", i);
            }
        }
        return 0;
    }