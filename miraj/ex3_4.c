#include <stdio.h>
int main()
{
    int a,b;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    if (a > b)
    {
        printf("your large number is: %d",a);
    }
    else if (a < b)
    {
        printf("your large number is: %d",b);
    }
    else 
    {
        printf("both number are same");
    }
}