#include<stdio.h>
int main () {
int a , b, c ;
printf("Enter first number :") ;
scanf("%d" ,&a) ;
printf("Enter second number :") ;
scanf("%d" ,&b) ;
printf("Enter third number :") ;
scanf("%d" ,&c) ;
if (a>b) { // b is out of the race
   if(a>c)
   printf(" %d :First integer is greatest" ,a); 
   else // a<c
   printf("%d is greatest" ,c) ;
}
else { // b>a -> a ab sabse bada to nahi hai
   
   if(b>c)
   printf(" %d :C is greatest" ,b) ;
   else // c>b
   printf("%d is greatest" ,c) ;

}

    return 0 ;
}