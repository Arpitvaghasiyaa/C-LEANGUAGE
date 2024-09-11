#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a numbre:");
    scanf("%d", &a);
    printf("enter a numbre:");
    scanf("%d", &b);
    printf("enter a numbre:");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("first number is larg");
    }
    else if (b > a && b > c)
    {
        printf("SECOND NUMBER IS LARG");
    }
    else if (c > a && c > b)
    {
        
        printf("THIRD NUMBER IS LARG");
    }
    else
    {
        printf("the number is same");
    }
}