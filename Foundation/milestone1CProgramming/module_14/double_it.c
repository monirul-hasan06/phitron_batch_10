#include<stdio.h>
    int double_it(int num)
    {
        num *= 2;
        return num;
    }

    int main(){
        int x = 20;
        int dbl = double_it(x);
        printf("%d", dbl);
        return 0;
    }
