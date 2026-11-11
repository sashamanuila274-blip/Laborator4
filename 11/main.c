#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;
    printf("Enter(n): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a natural number (greater than 0).\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is: %llu\n", n, factorial);
    }

    return 0;
}

