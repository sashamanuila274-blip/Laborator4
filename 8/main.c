#include <stdio.h>

int main() {                
    int n, sum = 0, count = 0;
    printf("Enter numbers (enter 0 to finish):\n");
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
    do {
        sum += n;  
        count++;
    } while (n >= 3 && n <= 10);
    if (count > 0){
        double average = (double)sum / count;
        printf("Average of numbers from the range [3, 10]: %.2f\n", average);
    } else {
        printf("No numbers from the range [3, 10] were entered.\n");
    }
    return 0;
}