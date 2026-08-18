#include <stdio.h>
int main()
{
    int r;
    int s;
    int a;
    printf("Enter Ram's age :");
    scanf("%d", &r);
    printf("Enter Shyam's age :");
    scanf("%d", &s);
    printf("Enter Ajay's age :");
    scanf("%d", &a);
    if (r < s && r < a)
    {
        printf("Ram is youngest");
    }
    if (s < r && s < a)
    {
        printf("Shyam is youngest");
    }
    if (a < r && a < s)
    {
        printf("Ajay is youngest");
    }
    return 0;
}