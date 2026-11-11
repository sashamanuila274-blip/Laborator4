#include <stdio.h>

int main() {
    int n, i, count = 0;
    double a, b, x;     

    printf("Enter a and b: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &x);
        if (x >= a && x <= b)   
            count++;
    }

    printf("Count in [%g, %g] = %d\n", a, b, count);
    return 0;
}