#include <stdio.h>

void printFactors(int n) {
    int i;
    printf("Factors: ");
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
}

int numOfDigits(int n) {
    int d = 0;
    while (n > 0) {
        d++;
        n = n / 10;
    }
    return d;
}

void main() {
    int n, d;

    scanf("%d", &n);

    printFactors(n);
    d = numOfDigits(n);
    printf("\nTotal digits = %d", d);
}
