#include <stdio.h>

void printN(int N) {
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%d", i);
        } else {
            printf(" %d", i);
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printN(N);
    return 0;
}
