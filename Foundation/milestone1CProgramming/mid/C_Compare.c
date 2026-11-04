#include<stdio.h>
    int main(){
        char X[20], Y[20];
        fgets(X, sizeof(X), stdin);
        getchar();
        fgets(Y, sizeof(Y), stdin);

        if(X>Y){
            printf("%s", X);
        }else{
            printf("%s", Y);
        }
        return 0;
    }