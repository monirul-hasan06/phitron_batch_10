#include<stdio.h>
    int main(){
        int n;
        scanf("%d", &n);
        while(n--){
            char a[101];
            scanf("%s", a);
            int len = strlen(a);
            if(len<=10){
                printf("%s\n", a);
            }else{
                int count = 0;
                printf("%c", a[0]);
                for(int i = 1; i<len-1; i++){
                    count++;
                }
                printf("%d", count);
                printf("%c\n", a[len-1]);
            }
        }
        return 0;
    }