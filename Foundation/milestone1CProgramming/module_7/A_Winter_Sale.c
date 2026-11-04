#include<stdio.h>
    int main(){
        int x;
        double p,op;
        scanf("%d %lf", &x, &p);
        op = (p*100)/(100-x);
        printf("%.2lf", op);
        return 0;
    }