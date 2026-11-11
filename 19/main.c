#include <stdio.h>

int main() {
    int n, i;
    double x, max;

    printf("Enter n (n >= 1): ");
    scanf("%d", &n);

    printf("Enter %d real numbers: ", n);
    scanf("%lf", &max);         

    for (i = 1; i < n; i++) {   
        scanf("%lf", &x);
        if (x > max)
            max = x;
    }

    printf("Maximum = %g\n", max);
    return 0;
}