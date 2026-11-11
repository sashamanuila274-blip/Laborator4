#include <stdio.h>

int main() {
    int n, i;
    long long sA = 0, sB = 0, sC = 0, sD = 0;
    long long fact = 1;     

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2)    
        sA += i;

    for (i = 2; i <= n; i += 2)    
        sB += i;

    for (i = 1; i <= n; i += 3)     
        sC += i;

    for (i = 1; i <= n; i++) {     
        sD += fact;
    }

    printf("A = %lld\nB = %lld\nC = %lld\nD = %lld\n", sA, sB, sC, sD);
    return 0;
}