#include<stdio.h>
    int main(){
        int x,p;
        double op;
        scanf("%d %d", &x, &p);
        op = p + x;
        printf("%.2lf", op);
        return 0;
    }