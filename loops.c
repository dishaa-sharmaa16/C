#include <stdio.h>
int main()
{

    // for (int i = 10; i >= 0; i--)
    // {
    //     printf("%d \n", i);
    // }

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d \n", i);
    // }

    // for (int i = 0; i <= 10; i++)
    // {
    //     printf("%d\n", i);
    // }

    // for (float i = 1.0; i <= 10.0; i++)
    // {
    //     printf("%f \n", i);
    // }

    //  for (char ch = 'a'; ch <= 'z'; ch++)
    // {
    //     printf("%c \n", ch);
    // }

    // for (int i = 1; i <= 50; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("%d\n", i);
    //     }
    // }

    // int sum = 0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     sum += i;
    // }
    // printf("the sum of first ten natural number is: %d", sum);

    // for (int i = 1; i <= 10; i++)
    // {
    //     int sq = i * i;
    //     printf("the square product is: %d\n ", i, sq);
    // }

    // int i = 1;
    // while (i <= 5)
    // {
    //     printf("hello world\n", i);
    //     i++;
    // }

    // int n;
    // printf("enter n: ");
    // scanf("%d", &n);

    // int i = 0;
    // while (i <= n)
    // {
    //     printf("%d \n", i);
    //     i++;
    // }

    // int i = 10;
    // do
    // {
    //     printf("%d\n", i);
    //     i++;
    // } while (i <= 100);

    // int n;
    // printf("enter n: ");
    // scanf("%d", &n);
    // int i = 1;
    // int sum = 0;
    // do
    // {
    //     sum = sum + i;

    //     i++;
    // } while (i <= n);

    // printf("sum of first n natutal number is: %d", sum);

    // int n;
    // printf("enter n: ");
    // scanf("%d", &n);

    // int table = 0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     table = n * i;
    //     printf("the table of n is: %d\n", table);
    // }

    // int n;
    // printf("enter n: ");
    // scanf("%d", &n);

    // int table = 0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i == 5)
    //     {
    //         break;
    //     }
    //     table = n * i;
    //     printf("%d\n", table);
    // }
    // printf("end");

    // int n;
    // do
    // {
    //     printf("enter number: ");
    //     scanf("%d\n", &n);
    //     printf("%d\n", n);

    //     if (n % 2 != 0)
    //     {
    //         break;
    //     }
    // } while (1);

    // for (int i = 1; i <= 10; i++)
    //  {
    //      if (i == 6)
    //      {
    //          continue;
    //      }
    //      printf("%d\n", i);
    //  }

    // for (int i = 5; i <= 50; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         continue;
    //     }
    //     printf("%d\n", i);
    // }

    // int n;
    // printf("enter number: ");
    // scanf("%d", &n);

    // int fact = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     fact = fact * i;
    // }
    // printf("factorial : %d\n", fact);

    // int n;
    // printf("enter n: ");
    // scanf("%d", &n);

    // for (int i = 10; i >= 1; i--)
    // {
    //     printf("%d\n", n * i);
    // }

    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i == 5)
    //     {
    //         continue;
    //     }
    //     printf("%d\n", i);
    // }

    // for (int i = 1; i <= 10; i++)
    // {

    //     if (i == 6)
    //     {
    //         break;
    //     }

    //     printf("%d\n", i);
    // }

    // for (int i = 1; i <= 100; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("%d\n", i);
    //         if (i > 50)
    //         {
    //             break;
    //         }
    //     }
    // }

    int choice;

    // do
    // {
    //     printf("----- Loop Testing Menu -----\n"
    //            "1. Print multiplication table using for loop\n"
    //            "2. Calculate factorial using while loop\n"
    //            "3. Print Fibonacci series using while loop\n"
    //            "4. Display a number pattern using nested for loop\n"
    //            "5. Check if a number is prime using while loop\n"
    //            "6. Exit\n"
    //            "-----------------------------\n");
    //     printf("enter your choice: ");
    //     scanf("%d", &choice);
    //     switch (choice)
    //     {
    //     case 1:
    //     {
    //         int num;
    //         printf("enter number: ");
    //         scanf("%d", &num);

    //         for (int i = 1; i <= 10; i++)
    //         {
    //             int table = num * i;
    //             printf("%d\n", table);
    //         }
    //         break;
    //     }

    //     case 2:
    //         int num1;
    //         printf("enter number: ");
    //         scanf("%d", &num1);
    //         int fact = 1;
    //         for (int i = 1; i <= num1; i++)
    //         {
    //             fact = fact * i;
    //         }
    //         printf("factorial : %d\n", fact);
    //         break;
    //     case 3:
    //         int n, a = 0, b = 1, next;
    //         printf("enter number of terms: ");
    //         scanf("%d", &n);
    //         printf("Fibonacci Series: ");

    //         for (int i = 0; i < n; i++)
    //         {
    //             if (i == 0)
    //             {
    //                 next = a;
    //             }
    //             else if (i == 1)
    //             {
    //                 next == b;
    //             }
    //             else
    //             {
    //                 next = a + b;
    //                 a = b;
    //                 b = next;
    //             }
    //             printf("%d \n", next);
    //         }
    //         break;
    //     case 4:
    //         /* code */
    //         break;
    //     case 5:
    //         /* code */
    //         break;
    //     case 6:
    //         printf("exit program");
    //         break;

    //     default:
    //         break;
    //     }
    // } while (choice != 6);
    return 0;
}