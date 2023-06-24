#include <stdio.h>
#include <math.h>

double exponential_series(double x, int n);

int main() {
    double x, result;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms to compute: ");
    scanf("%d", &n);

    result = exponential_series(x, n);

    printf("e^%lf - 1 = %lf\n", x, result);

    return 0;
}

double exponential_series(double x, int n) {
    int i;
    double result = 1.0, term;

    for (i = 1; i <= n; i++) {
        term = pow(x, i) / tgamma(i + 1);
        if (i % 2 == 0) {
            result -= term;
        } else {
            result += term;
        }
    }

    return result;
}
