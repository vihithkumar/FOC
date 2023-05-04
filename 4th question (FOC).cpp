#include <stdio.h>
int main() 
{
   int n, a = 0, b = 1, c = 0;
   printf("Enter a number: ");
   scanf("%d", &n);
   printf("Fibonacci series: ");
   while (c <= n) {
      printf("%d ", c);
      a = b;
      b = c;
      c = a + b;
}
   return 0;
