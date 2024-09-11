#include <stdio.h>
int main()
{
    int a;
    printf("enter number:");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("the number is positive");
    }
    else if (a < 0)
    {
        printf("negative");
    }
    else 
    {
        printf("zero");
    }
}