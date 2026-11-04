#include <stdio.h>
#include <string.h>

int main() {
    char S[10001];
    fgets(S, sizeof(S), stdin);

    int length = strlen(S);
    int fre[26] = {0};

    for(int i = 0; i < length; i++) {
        if(S[i] >= 'a' && S[i] <= 'z') {
            int val = S[i] - 'a';
            fre[val]++;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(fre[i] > 0) {
            printf("%c - %d\n", 'a' + i, fre[i]);
        }
    }

    return 0;
}