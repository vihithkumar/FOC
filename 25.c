#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter value of num1: ");
    scanf("%d", &num1);

    printf("Enter value of num2: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("The biggest number is %d\n", num1);
    } else {
        printf("The biggest number is %d\n", num2);
    }

    return 0;
}
