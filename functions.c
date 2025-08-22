// // #include <stdio.h>
// // void printNamaste();
// // void printBonjour();

// // int main()
// // {
// //     char lang;
// //     printf("enter language: ");
// //     scanf("%c", &lang);
// //     if (lang == 'i')
// //     {
// //         printNamaste();
// //     }
// //     else
// //     {
// //         printBonjour();
// //     }

// //     return 0;
// // }

// // void printNamaste()
// // {
// //     printf("NAMASTE!");
// // }
// // void printBonjour()
// // {
// //     printf("BONJOUR!");
// // }

// // #include <stdio.h>

// // int sum(int a, int b);
// // int main()
// // {
// //     int a, b;
// //     printf("enter a: ");
// //     scanf("%d", &a);

// //     printf("enter b: ");
// //     scanf("%d", &b);

// //     int s = sum(a, b);
// //     printf("sum is: %d", s);

// //     return 0;
// // }

// // int sum(int a, int b)
// // {
// //     return a + b;
// // }

// // #include <stdio.h>

// // void table(int n);

// // int main()
// // {
// //     int n;
// //     printf("enter n: ");
// //     scanf("%d", &n);

// //     table(n);

// //     return 0;
// // }

// // void table(int n)
// // {
// //     for (int i = 1; i <= 10; i++)
// //     {
// //         printf("%d\n", n * i);
// //     }
// // }

// // #include <stdio.h>

// // void calculatePrice(float value);
// // int main()
// // {

// //     float value;
// //     printf("enter value: ");
// //     scanf("%f", &value);

// //     calculatePrice(value);

// //     return 0;
// // }

// // void calculatePrice(float value)
// // {
// //     value = value + (0.18 * value);
// //     printf("the final price is: %f", value);
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main()
// // {

// //     int n;
// //     printf("enter n: ");
// //     scanf("%d", &n);

// //     printf("%f", pow(n, 2));

// //     return 0;
// // }

// #include <stdio.h>

// int fact(int n);
// int main()
// {
//     printf(" fact is : %d", fact(6));

//     return 0;
// }

// int fact(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     int factnm1 = n - 1;
//     int factn = factnm1 * n;

//     return factn;
// }

// #include <stdio.h>

// float convertFarh(float cel);

// int main()
// {
//     float farh = convertFarh(37);
//     printf("farhenheit is: %f", farh);

//     return 0;
// }

// float convertFarh(float cel)
// {
//     float farh = cel * (9.0 / 5.0) + 32;
//     return farh;
// }

// #include <stdio.h>
// int calPercentage(int maths, int english, int sanskrit);
// int main()
// {
//     int a, b, c;
//     printf("enter marks in maths : ");
//     scanf("%d", &a);
//     printf("enter marks in english: ");
//     scanf("%d", &b);
//     printf("enter marks in sanskrit: ");
//     scanf("%d", &c);

//     printf("percentage is: %d", calPercentage(a, b, c));

//     return 0;
// }

// int calPercentage(int maths, int english, int sanskrit)
// {
//     int total;
//     int marks = ((maths + english + sanskrit) / 3);

//     return marks;
// }

// #include <stdio.h>
// int sum(int a, int b);

// int main()
// {
//     int a;
//     int b;
//     printf("the sum is %d", sum(4, 7));

//     return 0;
// }
// int sum(int a, int b)
// {
//     return a + b;
// }

// #include <stdio.h>
// int max(int a, int b, int c);

// int main()
// {
//     int x;
//     int y;
//     int z;
//     printf("enter x: ");
//     scanf("%d", &x);
//     printf("enter y: ");
//     scanf("%d", &y);
//     printf("enter z: ");
//     scanf("%d", &z);

//     max(x, y, z);
//     return 0;
// }
// int max(int a, int b, int c)
// {

//     if (a > b && a > c)
//     {
//         printf("%d is maximum", a);
//     }
//     else if (b > a && b > c)
//     {
//         printf("%d is maximum", b);
//     }
//     else
//     {
//         printf("%d is maximum", c);
//     }

//     return 0;
// }

// #include <stdio.h>
// void checkEvenOdd(int n);
// int main()
// {
//     int n;
//     printf("enter number: ");
//     scanf("%d", &n);

//     checkEvenOdd(n);
//     return 0;
// }
// void checkEvenOdd(int n)
// {
//     if (n % 2 == 0)
//     {
//         printf("enen");
//     }
//     else
//     {
//         printf("odd");
//     }
//     return;
// }

// #include <stdio.h>
// int si(int principle, int rate, int time);
// int main()
// {
//     int principle;
//     int rate;
//     int time;

//     printf("enter principle amt: ");
//     scanf("%d", &principle);
//     printf("enter rate: ");
//     scanf("%d", &rate);
//     printf("enter time: ");
//     scanf("%d", &time);

//     printf("simple interest is: %d\n", si(principle, rate, time));
//     printf("total amout is: %d", si(principle, rate, time) + principle);
//     return 0;
// }
// int si(int principle, int rate, int time)
// {

//     return (principle * rate * time) / 100;
// }.

// #include <stdio.h>
// int sq(int a);
// int main()
// {
//     int x;
//     printf("enter number: ");
//     scanf("%d", &x);
//     sq(x);
//     return 0;
// }

// int sq(int a)
// {

//     int square = a * a;
//     printf("the square of number is: %d", square);
//     return 0;
// }

// #include <stdio.h>
// int checkEvenOdd();
// int main()
// {
//     int x;
//     printf("enter number: ");
//     scanf("%d", &x);
//     checkEvenOdd(x);

//     return 0;
// }

// int checkEvenOdd(int x)
// {
//     if (x % 2 == 0)
//     {
//         printf("the number is even");
//     }
//     else
//     {
//         printf("the number is odd");
//     }

//     return 0;
// }

// #include <stdio.h>
// int bigger();
// int main()
// {
//     int a;
//     int b;
//     printf("enter a: ");
//     scanf("%d", &a);
//     printf("enter b: ");
//     scanf("%d", &b);

//     bigger(a, b);

//     return 0;
// }

// int bigger(int a, int b)
// {
//     if (a > b)
//     {
//         printf("the greater number is %d", a);
//     }
//     else
//     {
//         printf("the greater number is %d", b);
//     }

//     return 0;
// }
