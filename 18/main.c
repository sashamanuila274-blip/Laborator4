#include <stdio.h>

int main() {
    int n, i, x, count = 0, sum = 0;6     

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            sum += x;
            count++;
        }
    }

    if (count > 0)
        printf("Average of even numbers = %.2f\n", (float)sum / count);
    else
        printf("There were no even numbers\n");
    return 0;
}