#include<stdio.h>
int main () {
    int r , s , a ;
    printf("Enter Ram age :") ;
    scanf("%d" ,&r) ;
     printf("Enter Shyam age :") ;
    scanf("%d" ,&s) ;
     printf("Enter Ajay age :") ;
    scanf("%d" ,&a) ;
    if(r<s) {
        if(r<a)
        printf("Ram is youngest") ;
        else 
        printf("Ajay is youngest");    
    }
    else{
        if(s<a)
        printf("Shyam is youngest") ;
        else 
        printf("Ajay is youngest") ;
    }
    return 0 ;
}