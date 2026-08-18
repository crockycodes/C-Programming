#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the coordinate x :");
    scanf("%d", &x);
    printf("Enter the coordinate y :");
    scanf("%d", &y);
    if (x == 0 && y == 0)
    {
        printf("The point is origin");
    }
    else if (x == 0)
    {
        printf("Lies on y-axis");
    }
    else if (y == 0)
    {
        printf("Lies on x-axis");
    }
    else
    {
        printf("The point does not lie on the x or y axis ");
    }
    return 0;
}