#include<stdio.h>
    int main(){
        char a[1000001];
        scanf("%s", a);
        int len = strlen(a);
        int sum = 0;
        for(int i=0; i<len;i++){
            sum += a[i]-'0';
        }

        printf("%d", sum);
        return 0;
    }