#include<stdio.h>
#include<string.h>
    int main(){
        int N;
        scanf("%d", &N);
        while(N--){
            char S[51];
            char T[51];
            scanf("%s", S);
            scanf("%s", T);
            
            int len = 0;

            if(strlen(S)>strlen(T)){
                len = strlen(S);
            }else{
                len = strlen(T);
            }

            for(int i=0; i<len; i++){
                if(i < strlen(S)) printf("%c", S[i]);
                if(i < strlen(T)) printf("%c", T[i]);
            }
            printf("\n");
        }
        return 0;
    }