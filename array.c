#include <stdio.h>

int main()
{
    // int marks[3];
    // printf("enter phy: ");
    // scanf("%d", &marks[0]);

    // printf("enter math: ");
    // scanf("%d", &marks[1]);

    // printf("enter chem: ");
    // scanf("%d", &marks[2]);

    // printf("phy: %d, math: %d, chem: %d", marks[0], marks[1], marks[2]);

    // float item[3];
    // printf("enter sugar: ");
    // scanf("%f", &item[0]);

    // printf("enter chai: ");
    // scanf("%f", &item[1]);

    // printf("enter water: ");
    // scanf("%f", &item[2]);

    // printf("sugar: %f\n", item[0] + (0.18 * item[0]));
    // printf("chai: %f\n", item[1] + (0.18 * item[1]));
    // printf("water: %f\n", item[2] + (0.18 * item[2]));

    //     int aadhar[5];
    //     int *ptr = &aadhar[0];
    //     for (int i = 0; i < 5; i++)
    //     {
    //         printf("%d index: ", i);
    //         scanf("%d", (ptr + i));
    //     }

    //     for (int i = 0; i < 5; i++)
    //     {
    //         printf("%d index= %d\n", i, *(ptr + i));
    //     }

    //  int arr[2][3];
    // arr[0][0] = 89;
    // arr[0][1] = 85;
    // arr[0][2] = 86;
    // arr[1][0] = 87;
    // arr[1][1] = 97;
    // arr[1][2] = 37;

    // printf("%d\n", arr[0][0]);

    //     int countOdd(int arr[], int n)
    // {

    //     int count = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (arr[i] % 2 != 0)
    //         {
    //             count++;
    //         }
    //     }
    //     return count;
    // }

    //     #include <stdio.h>

    // void rev(int arr[], int n);
    // void print(int arr[], int n);

    // int main()
    // {
    //     int arr[] = {1, 2, 3, 4, 5};
    //     rev(arr, 5);
    //     print(arr, 5);
    //     return 0;
    // }

    // void print(int arr[], int n)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         printf("%d\t", arr[i]);
    //     }
    //     printf("\n");
    // }
    // void rev(int arr[], int n)
    // {
    //     for (int i = 0; i < n / 2; i++)
    //     {
    //         int firstValue = arr[i];
    //         int secondValue = arr[n - i - 1];

    //         arr[i] = secondValue;
    //         arr[n - i - 1] = firstValue;
    //     }
    // }

    // int n;
    // printf("enter number: ");
    // scanf("%d", &n);

    // int fib[n];
    // fib[0] = 0;

    // if (n > 1)
    //     fib[1] = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     if (i >= 2)
    //         fib[i] = fib[i - 1] + fib[i - 2];
    //     printf("%d\t", fib[i]);
    // }
    // printf("\n");

    // int arr[] = {9, 3, 4};
    // if (arr[0] > arr[1] && arr[0] > arr[2])
    // {
    //     printf("the largest element is: %d\n", arr[0]);
    // }
    // else if (arr[1] > arr[0] && arr[1] > arr[2])
    // {
    //     printf("the largest element is: %d\n", arr[1]);
    // }
    // else
    // {
    //     printf("the largest element is: %d\n", arr[2]);
    // }

    // if (arr[0] < arr[1] && arr[0] < arr[2])
    // {
    //     printf("the smallest element is: %d\n", arr[0]);
    // }
    // else if (arr[1] < arr[0] && arr[1] < arr[2])
    // {
    //     printf("the smallest element is: %d\n", arr[1]);
    // }
    // else
    // {
    //     printf("the smallest element is: %d\n", arr[2]);
    // }

    // int n;
    // printf("Enter number of elements: ");
    // scanf("%d", &n);

    // int arr[n];
    // printf("Enter %d elements:\n", n);

    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    // }

    // printf("Sum of all elements = %d\n", sum);

    // int arr[6] = {1, 2, 3, 4, 5, 6};
    // int evenCount = 0;
    // int oddCount = 0;
    // for (int i = 0; i < 6; i++)
    // {

    //     if (arr[i] % 2 == 0)
    //     {
    //         evenCount++;
    //     }
    //     else
    //     {
    //         oddCount++;
    //     }
    // }
    // printf("odd: %d\n", oddCount);
    // printf("even: %d\n", evenCount);

    // char name[50];
    // scanf("%s", name);

    // int vcount = 0;
    // int ccount = 0;

    // for (int i = 0; name[i] != '\0'; i++)
    // {
    //     char ch = name[i];

    //     // Check for vowels
    //     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    //         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    //     {
    //         vcount++;
    //     }
    //     else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    //     {
    //         ccount++;
    //     }
    // }

    // printf("Vowels: %d\n", vcount);
    // printf("Consonants: %d\n", ccount);

    // int arr[] = {1, 2, 3, 98, 4};
    // int max = arr[0];
    // int size = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 1; i < size; i++)
    // {
    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }
    // }

    // printf("Maximum: %d\n", max);

    //     #include <stdio.h>
    // #include <limits.h>
    // int countLength(char arr[]);
    // int main()
    // {

    //     char name[100];
    //     fgets(name, 100, stdin);
    //     puts(name);
    //     printf("size is: %d", countLength(name));
    //     return 0;
    // }
    // int countLength(char arr[])
    // {
    //     int count = 0;
    //     for (int i = 0; arr[i] != '\0'; i++)
    //     {
    //         count++;
    //     }

    //     return count;
    // }
    return 0;
}
