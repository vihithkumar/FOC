#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("The sum of the series is: %d", sum);

    return 0;
}
