#include<stdio.h>
int main (){
    int a,b ; // a>b
    printf("Enter your dividend number :") ;
    scanf("%d" ,&a) ;
    printf("Enter your divisor number :");
    scanf("%d" ,&b) ;
     int q = a/b ;
     int r = a - (b * q); // divisor
     printf("The quotient is : %d \n" ,q);
     printf("The remainder is : %d" ,r);
    // int r = a%b ;
    // printf("The remainder when %d is divided by %d is : %d" ,a,b,r);
    return 0 ;

}