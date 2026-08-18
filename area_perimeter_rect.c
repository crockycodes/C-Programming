#include<stdio.h>
int main () {
    int l ;
    int b ;
    printf("Enter your lenght :") ;
    scanf("%d" ,&l) ;
     printf("Enter your breath :") ;
    scanf("%d" ,&b) ;
    int area = l * b ;
    int perimeter = 2 * (l + b) ;
    if (area>perimeter) {
        printf("Area is greater") ;
    }
    else {
        printf("Perimeter is greater") ;
    }
    if (area==perimeter) {
        printf("Both are equal") ;
    }
    return 0;
}