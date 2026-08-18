#include <stdio.h>
int main()
{
    int n;
    printf("Enter your percentage :");
    scanf("%d", &n);
    // more than 80 -> a grade
    // more than 60 marks -> b grade
    // more than 50 marks ->
    // less than 40 -> d grade
    if (n > 80)
    {
        printf("A grade");
    }
    else if (n > 60)
    {
        printf("B grade");
    }
    else if (n > 40)
    {
        printf("C grade");
    }
    else
    {
        printf("D grade");
    }

    return 0;
}