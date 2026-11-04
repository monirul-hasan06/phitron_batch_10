#include <stdio.h>

// Function to check if a number N is prime
int isPrime(long long n) {
    if (n <= 1) {
        return 0; // Not prime
    }

    // Check all numbers from 2 up to sqrt(n)
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Found a factor, so it's not prime
        }
    }

    return 1; // No factors found, it is prime
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        if (isPrime(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
