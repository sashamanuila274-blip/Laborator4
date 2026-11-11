#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter(n): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a natural number (greater than 0).\n");
    } else {
        for (int i = 1; i <= n; i++) {
            if (sum + i > 100) {
                printf("The sum would exceed 100. Stopping.\n");
                break;
            }
            sum += i;
        }

        printf("Current sum: %d\n", sum);
    }

    return 0;
}