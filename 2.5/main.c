#include <stdio.h>

int main() {
    int x, pos = 0, sum = 0;
    long long prod = 1;

    printf("Enter numbers (0 to stop): ");
    while (1) {
        scanf("%d", &x);
        if (x == 0)
            break;
        pos++;
        if (pos % 2 == 1)
            sum += x;      
        else
            prod *= x;     
    }

    printf("Sum = %d\n", sum);
    if (pos >= 2)
        printf("Product = %lld\n", prod);
    else
        printf("Product: there were no numbers on even positions\n");
    return 0;
}