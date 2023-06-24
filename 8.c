#include <stdio.h>

int main() {
    int n, i, sum = 0, sign = 1;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += sign * i;
        sign = -sign;
    }

    printf("The sum of the series is: %d", sum);

    return 0;
}

