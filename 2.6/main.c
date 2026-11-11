#include <stdio.h>

int main() {
    int n, k, j, printed = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (k = 1; printed < n; k++) {         
        for (j = 0; j < k && printed < n; j++) {
            printf("1 ");
            printed++;
        }
        if (printed < n) {                 
            printf("-1 ");
            printed++;
        }
    }

    printf("\n");
    return 0;
}