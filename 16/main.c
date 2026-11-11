#include <stdio.h>

int main() {
    int n, i, x, sumNeg = 0, hasPos = 0;
    long long prod = 1;         
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x > 0) {
            prod *= x;
            hasPos = 1;
        } else if (x < 0) {
            sumNeg += x;
        }
    }

    if (hasPos)
        printf("Product of positive numbers = %lld\n", prod);
    else
        printf("There were no positive numbers\n");
    printf("Sum of negative numbers = %d\n", sumNeg);
    return 0;
}