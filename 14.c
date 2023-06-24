#include <stdio.h>

int main() {
    int n, i;
    double product = 1;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        product *= i;
    }

    printf("The factorial of %d is: %.0lf", n, product);

    return 0;
}
