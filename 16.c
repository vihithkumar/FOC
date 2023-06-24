#include <stdio.h>

int main() {
    int n, i, num;
    double sum = 0, average;

    printf("Enter the number of integers to sum up: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    average = sum / n;

    printf("The sum of the %d integers is: %.0lf\n", n, sum);
    printf("The average of the %d integers is: %.2lf", n, average);

    return 0;
}
