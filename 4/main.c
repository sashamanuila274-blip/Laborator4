#include <stdio.h>

int main() {
    int n=1, v[100], i=0, j;

    printf("Enter numbers (enter 0 to finish):\n");

    while (1) {
    scanf("%d", &n);

    if (n == 0)
        break;

    if (n % 2 != 0)
        continue;

    v[i] = n;
    i++;
}

for (j = 0; j < i; j++) {
    printf("%d ", v[j]);
}

return 0;
}