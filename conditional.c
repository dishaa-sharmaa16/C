#include <stdio.h>
int main()
{

    /*int x;
     int y;
     int z;
     printf("enter x: ");
     scanf("%d", &x);
     printf("enter y: ");
     scanf("%d", &y);
     printf("enter z: ");
     scanf("%d", &z);

     if (x <= y && x <= z)
     {
         printf("%d is the smallest number.\n", x);
     }
     else if (y <= x && y <= z)
     {
         printf("%d is the smallest number.\n", y);
     }
     else
     {
         printf("%d is the smallest number.\n", z);
     }*/

    /*int age;
    printf("enter age : ");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("adult");
    }
    else
    {
        printf("minor");
    }*/

    /*int marks;
    printf("enter your marks: ");
    scanf("%d", &marks);

    if (marks > 90)
    {
        printf("A+");
    }
    else if (marks > 80 && marks < 90)
    {
        printf("A");
    }
    else
    {
        printf("hahaa");
    }*/

    /*int x;
    int y;

    printf("enter x: ");
    scanf("%d", &x);
    printf("enter y: ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("the greater number is '%d'", x);
    }
    else
    {
        printf("the greater number is '%d'", y);
    }*/

    /*int marks;
    printf("enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("GRADE A");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("GRADE B");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("GRADE C");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("GRADE D");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("GRADE E");
    }
    else
    {
        printf("GRADE F");
    }*/

    /*int x, y;
    char operation;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation); // Notice the space before %c

    if (operation == '+')
    {
        printf("The answer is %d\n", x + y);
    }
    else if (operation == '-')
    {
        printf("The answer is %d\n", x - y);
    }
    else if (operation == '*')
    {
        printf("The answer is %d\n", x * y);
    }
    else if (operation == '/')
    {
        if (y != 0)
            printf("The answer is %d\n", x / y);
        else
            printf("Division by zero is not allowed.\n");
    }
    else
    {
        printf("Invalid operation.\n");
    }*/

    /*int num;
    printf("enter number: ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("1- ONE");
    }
    else if (num == 2)
    {
        printf("2- TWO");
    }
    else if (num == 3)
    {
        printf("3- THREE");
    }
    else if (num == 4)
    {
        printf("4- FOUR");
    }
    else if (num == 5)
    {
        printf("5- FIVE");
    }
    else if (num == 6)
    {
        printf("6- SIX");
    }
    else if (num == 7)
    {
        printf("7- SEVEN");
    }
    else if (num == 8)
    {
        printf("8- EIGHT");
    }
    else if (num == 9)
    {
        printf("9- NINE");
    }
    else if (num == 10)
    {
        printf("10- TEN");
    }
    else
    {
        printf("invalid output");
    }*/

    /*int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    printf("enter marks 1: ");
    scanf("%d", &sub1);
    printf("enter marks 2: ");
    scanf("%d", &sub2);
    printf("enter marks 3: ");
    scanf("%d", &sub3);
    printf("enter marks 4: ");
    scanf("%d", &sub4);
    printf("enter marks 5: ");
    scanf("%d", &sub5);

    if (sub1 > 40 && sub2 > 40 && sub3 > 40 && sub4 > 40 && sub5 > 40)
    {
        printf("PASS");
    }
    else if (
        sub1 < 40 || sub2 < 40 || sub3 < 40 || sub4 < 40 || sub5 < 40)
    {
        printf("apply 5 grace marks and pass");
    }
    else
    {
        printf("fail");
    }*/

    /* char user[20];
     char pass[20];


     char correctUser[] = "disha";
     char correctPass[] = "disha123";

     printf("Enter username: ");
     scanf("%s", user);

     printf("Enter password: ");
     scanf("%s", pass);

     if (strcmp(user, correctUser) == 0 && strcmp(pass, correctPass) == 0)
     {
         printf("Matched\n");
     }
     else
     {
         printf("Not matched\n");
     } */

    /*float bill;
    printf("enter bill amt: ");
    scanf("%f", &bill);

    if (bill < 100)
    {
        printf("the total bill is %.2f\n", bill * 1.5);
    }
    else if (bill >= 100 && bill < 200)
    {
        printf("the total bill is %.2f\n", bill * 2.5);
    }
    else if (bill >= 200 && bill < 300)
    {
        printf("the total bill is %.2f\n", bill * 4);
    }
    else
    {
        printf("the total bill is %.2f\n", bill * 5);
    }*/

    /*int a;
    int b;
    int c;

    printf("enter three sidees of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("it is a valid triangle");
    }
    else
    {
        printf("not valid");
    }*/

    /* float cp;
     float sp;

     printf("enter cost price: ");
     scanf("%f", &cp);

     printf("enter selling price: ");
     scanf("%f", &sp);

     float profit = sp - cp;
     float loss = cp - sp;

     if (sp > cp)
     {
         {
             printf("the profit is rs%f", profit);
         }
     }
     else
     {
         printf("the loss is rs%f", loss);
     } */

    /*float weight;
   float height;

   float bmi = weight / height * height;

   printf("enter weight: ");
   scanf("%f", &weight);
   printf("enter height: ");
   scanf("%f", &height);

   if (bmi < 18.5)
   {
       printf("underweight");
   }
   else if (bmi >= 18.5 && bmi < 24.9)
   {
       printf("normal");
   }
   else if (bmi >= 25 && bmi < 29.9)
   {
       printf("overweight");
   }
   else
   {
       printf("obese");
   }*/

    /*int day;
    printf("enter day(1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday");

        break;
    case 2:
        printf("Tuesday");

        break;
    case 3:
        printf("Wednesday");

        break;
    case 4:
        printf("Thursday");

        break;
    case 5:
        printf("Friday");

        break;
    case 6:
        printf("Saturday");

        break;
    case 7:
        printf("Suhnday");
        break;

    default:
        printf("not valid");
    }*/

    /*float amt;
    int convertTo;

    printf("enter amt: ");
    scanf("%f", &amt);

    printf("convert to? 1-USD 2-AED 3-GBP 4-EUR  : ");
    scanf("%d", &convertTo);

    switch (convertTo)
    {
    case 1:
        printf("Converted amount is: %f", amt / 83.0);
        break;
    case 2:
        printf("Converted amount is: %f", amt / 90.0);
        break;
    case 3:
        printf("Converted amount is: %f", amt / 105.0);
        break;
    case 4:
        printf("Converted amount is: %f", amt / 22.6);
        break;

    default:
        printf("invalid input");
    } */

    /*char grade;
    printf("enter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Execellent");
        break;
    case 'B':
        printf("good");
        break;
    case 'C':
        printf("nice");
        break;
    case 'D':
        printf("star");
        break;
    case 'E':
        printf("do better");
        break;
    case 'F':
        printf("Fail");
        break;

    default:
        printf("invalid input");
    } */

    // int num;
    // printf("enter number: ");
    // scanf("%d", &num);

    // if (num > 0)
    // {
    //     printf("it is a natural number");
    // }
    // else
    // {
    //     printf("it is not a natural number");
    // }

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // if (n >= 1 && n <= 9)
    // {
    //     switch (n)
    //     {
    //     case 1:
    //         printf("one\n");
    //         break;
    //     case 2:
    //         printf("two\n");
    //         break;
    //     case 3:
    //         printf("three\n");
    //         break;
    //     case 4:
    //         printf("four\n");
    //         break;
    //     case 5:
    //         printf("five\n");
    //         break;
    //     case 6:
    //         printf("six\n");
    //         break;
    //     case 7:
    //         printf("seven\n");
    //         break;
    //     case 8:
    //         printf("eight\n");
    //         break;
    //     case 9:
    //         printf("nine\n");
    //         break;
    //     }
    // }
    // else
    // {
    //     printf("Greater than 9\n");
    // }

    return 0;
}
