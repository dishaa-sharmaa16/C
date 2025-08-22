#include <stdio.h>

int main()
{
       long long n;
       printf("Enter a positive integer: ");
       if (scanf("%lld", &n) != 1 || n <= 0)
       {
              printf("Invalid input.\n");
              return 1;
       }

       printf("%lld", n); // print the starting value
       int steps = 0;

       while (n != 1)
       {
              if (n % 2 == 0)
              {
                     n = n / 2;
              }
              else
              {
                     // beware of potential overflow for very large n
                     n = 3 * n + 1;
              }
              printf(" -> %lld", n);
              steps++;
       }

       printf("\nSteps: %d\n", steps);
       return 0;
}
