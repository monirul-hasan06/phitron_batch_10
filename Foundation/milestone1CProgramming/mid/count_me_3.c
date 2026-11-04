#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);
    getchar();

    while(T--){
        char S[10000];
        fgets(S, sizeof(S), stdin);

        int length = strlen(S);
        int Cap = 0, Small = 0, Digit = 0;

        for(int i = 0; i < length; i++){
            if('A' <= S[i] && S[i] <= 'Z'){
                Cap++;
            }
            else if('a' <= S[i] && S[i] <= 'z'){
                Small++;
            }
            else if('0' <= S[i] && S[i] <= '9'){
                Digit++;
            }
        }

        printf("%d %d %d\n", Cap, Small, Digit);
    }

    return 0;
}

