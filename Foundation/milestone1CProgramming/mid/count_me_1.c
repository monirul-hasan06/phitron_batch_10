#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    
    int cnt2 = 0, cnt3 = 0;
    
    for(int i=0; i<N; i++){
        if(A[i]%2==0 && A[i]%3==0){
            cnt2++;
        }
        else if(A[i]%2==0){
            cnt2++;
        }
        else if(A[i]%3==0){
            cnt3++;
        }
    }

    printf("%d ", cnt2);
    printf("%d", cnt3);
    return 0;
}