#include <stdio.h>

int main() {
    int n, i, x, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += x;
    }

    printf("Sum = %d\n", sum);
    return 0;
}