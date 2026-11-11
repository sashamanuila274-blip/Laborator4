#include <stdio.h>

int main() {
    int n, i;
    long long a = 1, b = 1, next;   

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%lld ", a);         
        next = a + b;              
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}