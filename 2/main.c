#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter numbers (enter 0 to finish):\n");

    while (n != 0){
        scanf("%d", &n);
        sum += n; 
    }

    printf("Sum of entered numbers: %d\n", sum);

    return 0;
}