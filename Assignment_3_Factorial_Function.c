#include <stdio.h>

long long factorial(int n) {
    long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (n > 20) {
        printf("Please enter a number from 0 to 20.\n");
    } else {
        printf("Factorial of %d = %lld\n", n, factorial(n));
    }

    return 0;
}
