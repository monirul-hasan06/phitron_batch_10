#include<stdio.h>
    int main(){
        int A;
        long long int B;
        float C;
        char D;
        scanf("%d %lli %f %c", A, B, C, D);
        printf("%d\n", A);
        printf("%lli\n", B);
        printf("%.2f\n", C);
        printf("%c", D);
        return 0;
    }