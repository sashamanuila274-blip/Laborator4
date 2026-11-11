#include <stdio.h>

int main() {
    int n=1, poz = 0, neg = 0;

    printf("Enter numbers (enter 0 to finish):\n");

    while (n != 0) {
    scanf("%d", &n);
    if (n >=0){
        poz++;
    }
    else if (n < 0){
        neg++;
    }
}
    printf("Number of positive numbers: %d\n", poz);
    printf("Number of negative numbers: %d\n", neg);

return 0;
}