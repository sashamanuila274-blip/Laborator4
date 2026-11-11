#include <stdio.h>

int main() {
    int n, sum = 0, produs = 1 ;

    printf("Enter numbers (enter 0 to finish):\n");

    while (n != 0){
        scanf("%d", &n);
        if (n % 2 == 0) {
            sum += n;
        }
        else {
            produs *= n;
        }
    }


    printf("Sum of entered numbers: %d\n", sum);
    printf("Product of odd numbers: %d\n", produs);

    return 0;
}