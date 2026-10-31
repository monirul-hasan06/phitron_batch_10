#include<stdio.h>
    int main(){
        char a[10000001];
        scanf("%s", a);

        int fre[26];
        for(int i=0; i<10000000; i++){
            int val = a[i] - '0';
            fre[val]++;
        }

        for(int i=0; i<26; i++){
            printf("%c : %d\n", a[i], fre[i]);
        }
        return 0;
    }