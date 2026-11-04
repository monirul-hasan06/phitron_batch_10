#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int main(){
        char s[100000];
        gets(s);
        int length = strlen(s);

        int cnt = 0;
        for(int i=0; i<length; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                continue;
            }
        else{
                cnt++;
            }
        }

        printf("%d", cnt);
        return 0;
    }