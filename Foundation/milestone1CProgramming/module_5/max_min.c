#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int mn = A, mx = A;
    if (B < mn) mn = B;
    if (C < mn) mn = C;
    if (B > mx) mx = B;
    if (C > mx) mx = C;

    printf("%d %d\n", mn, mx);
    return 0;
}
