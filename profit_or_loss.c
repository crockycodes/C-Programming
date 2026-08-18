#include<stdio.h>
int main () {
int cp ; 
int sp ; 
printf("Enter your cost price : " );
scanf("%d" ,&cp) ;
printf("Enter your selling price  : " );
scanf("%d" ,&sp) ;
if(cp<sp) {
 printf("The seller has made a profit");
}
if(cp>sp) {
    printf("The seller has incurred a loss") ;
}
if(cp==sp) {
    printf("No profit no loss") ;
}
    return 0 ;
}