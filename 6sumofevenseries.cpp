#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    printf("The sum of the even number series from 2 to %d is: %d", n, sum);

    return 0;
}

