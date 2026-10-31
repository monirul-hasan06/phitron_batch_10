#include <stdio.h>

int main() {
    char s[10000001];
    int fre[26] = {0};

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        fre[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (fre[i] > 0) {
            printf("%c : %d\n", 'a' + i, fre[i]);
        }
    }

    return 0;
}
