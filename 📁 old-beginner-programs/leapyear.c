#include<stdio.h>
int main () {
    int n;
printf("Enter your year :");
scanf("%d" ,&n) ;
if (n%4==0) {
    printf("It is a Leap Year") ;
}
else {
    printf("It is not a leap year") ;
}
    return 0 ;
}