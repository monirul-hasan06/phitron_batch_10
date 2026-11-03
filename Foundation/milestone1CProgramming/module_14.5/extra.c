#include <stdio.h>

int main() {
    int n = 4;  // number of rows

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}