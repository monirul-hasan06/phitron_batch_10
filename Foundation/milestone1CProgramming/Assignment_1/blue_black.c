#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int blue_cost = A * 3 ;
    int black_cost = A + B;
        if(blue_cost < black_cost){
        printf("%d", blue_cost);
    }else{
        printf("%d", black_cost);
    }
    return 0;
}
