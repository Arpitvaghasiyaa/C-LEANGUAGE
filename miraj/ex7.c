#include<stdio.h>
int main()
{
    int n,i;
    printf("enter first number:");
    scanf("%d",&i);
    
    printf("enter second  number:");
    scanf("%d",&n);
     
     if(i%n==0){
      printf("the numbers is prime");

     }
     else {
        printf("the numbers is not prime");
     }
}
