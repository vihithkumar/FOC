#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digit, sum = 0, num_digits = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    temp = n;

   
    while (temp != 0) {
        num_digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, num_digits);
        temp /= 10;
    }

    
    if (sum == n) {
        printf("%d is an Armstrong number.", n);
    }
    else {
        printf("%d is not an Armstrong number.", n);
    }

    return 0;
}