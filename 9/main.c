#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter(n): ");
    scanf("%d", &n);

    
    if (n < 1) {
        printf("Please enter a natural number (greater than 0).\n");
    } else {
    
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        printf("Sum of the first %d natural numbers is: %d\n", n, sum);
    }
    return 0;
}