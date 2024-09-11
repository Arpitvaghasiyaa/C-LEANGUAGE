#include<stdio.h>
 int main()
 {
   int a,b=0;
   printf("enter number\n");
   scanf("%d",&a);

   do{
    printf("%d\n",b);
    b=b+1;
   }while(b<a);
 }