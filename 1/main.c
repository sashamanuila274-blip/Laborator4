#include <stdio.h>

int main() {
    int n, suma = 0, i = 0;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    while (i <= n) {
        suma += i;
        i++; 
    }
    printf("The sum of natural numbers s: %d\n", suma);
    return 0;
}