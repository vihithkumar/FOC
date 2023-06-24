#include <stdio.h>

int main() {
    int i, N, sum = 0;
   
    printf("Enter the value of N: ");
    scanf("%d", &N);
   
    for(i = 1; i <= N; i += 2) {
        sum = sum + i;
    }
   
    printf("Sum of odd numbers from 1 to %d is %d", N, sum);
   
    return 0;
}
