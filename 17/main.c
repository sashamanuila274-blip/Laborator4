#include <stdio.h>

int main() {
    int n, i, x, count = 0;     

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x > 0)
            count++;
    }

    printf("Positive values: %d\n", count);
    return 0;
}