#include <stdio.h>

int main() {
    int n, i, num, biggest;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter number 1: ");
    scanf("%d", &biggest);

    
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > biggest) {
            biggest = num;
        }
    }

    printf("The biggest number is %d\n", biggest);

    return 0;
}
