#include <stdio.h>
void printNamaste();
void printBonjour();

int main()
{
    char lang;
    printf("enter language: ");
    scanf("%c", &lang);
    if (lang == 'i')
    {
        printNamaste();
    }
    else
    {
        printBonjour();
    }

    return 0;
}

void printNamaste()
{
    printf("NAMASTE!");
}
void printBonjour()
{
    printf("BONJOUR!");
}
