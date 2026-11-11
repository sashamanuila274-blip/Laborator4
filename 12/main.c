#include <stdio.h>

int main() {
    double b, result = 1;               
    int e, i, k;                     

    printf("Enter base b: ");
    scanf("%lf", &b);
    printf("Enter exponent e (integer): ");
    scanf("%d", &e);

    k = (e < 0) ? -e : e;  

    if (b == 0 && e < 0) {
        printf("Division by zero\n");
    } else {
        for (i = 0; i < k; i++)
            result *= b;
        if (e < 0)
            result = 1.0 / result;  
        printf("%g^%d = %g\n", b, e, result);
    }
    return 0;
}