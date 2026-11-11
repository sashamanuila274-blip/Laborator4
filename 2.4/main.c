#include <stdio.h>

int main() {
    int n, i;
    double prev, x;     

    printf("Enter n (n >= 2): ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    scanf("%lf", &prev);            

    for (i = 1; i < n; i++) {
        scanf("%lf", &x);
        printf("%.2f ", (prev + x) / 2);   
        prev = x;                   
    }

    printf("\n");
    return 0;
}