#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main()
{
    // printf("hello, world\n");

    /*int number = 20;
    char star = '*';
^    printf("%c", star);*/

    /*

    float number = 2.55;
    printf("%f", number);*/

    /*int age;
     printf("enter age");
     scanf("%d", &age);
     printf("age is:%d", age);*/

    // int marks;
    // printf("enter marks: ");
    // scanf("%d", &marks);

    // if (marks > 30)
    // {
    //     printf("pass");
    // }
    // else
    // {
    //     printf("fail");
    // }

    //
    //

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int table = 0;
    for (int i = 1; i <= 10; i++)
    {
        // if (i == 5)
        // {
        //     break;
        // }
        table = n * i;
        printf("%d\n", table);
    }
    printf("end");

    return 0;
}