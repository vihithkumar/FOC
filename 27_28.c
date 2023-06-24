#include <stdio.h>
#include <math.h>

double sin_series(double x, int n);
double cos_series(double x, int n);

int main() {
    double x, sin_val, cos_val;
    int n;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms to compute: ");
    scanf("%d", &n);

    sin_val = sin_series(x, n);
    cos_val = cos_series(x, n);

    printf("sin(%lf) = %lf\n", x, sin_val);
    printf("cos(%lf) = %lf\n", x, cos_val);

    return 0;
}

double sin_series(double x, int n) {
    int i, sign = 1;
    double result = 0.0, term;

    for (i = 1; i <= n; i += 2) {
        term = sign * pow(x, i) / tgamma(i + 1);
        result += term;
        sign = -sign;
    }

    return result;
}

double cos_series(double x, int n) {
    int i, sign = 1;
    double result = 1.0, term;

    for (i = 2; i <= n; i += 2) {
        term = sign * pow(x, i) / tgamma(i);
        result += term;
        sign = -sign;
    }

    return result;
}
