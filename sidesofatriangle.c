#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter your side a :");
    scanf("%d", &a);
    printf("Enter your side b :");
    scanf("%d", &b);
    printf("Enter your side c :");
    scanf("%d", &c);
    if ((a + b) > c && (b + c) > a && (c + a > b))
    {
        printf("They can be the sides of a triangele");
    }
    else
    {
        printf("They are not sides of a triangle");
    }
    return 0;
}