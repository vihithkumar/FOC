#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);

    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);

    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
