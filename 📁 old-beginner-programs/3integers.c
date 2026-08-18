#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter your number a :");
    scanf("%d", &a);
    printf("Enter your number b :");
    scanf("%d", &b);
    printf("Enter your number c :");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a is greater ");
    }
    if (b > a && b > c)
    {
        printf("b is greater ");
    }
    if (c > a && c > b)
    {
        printf("c is greater ");
    }
    return 0;
} 