#include <stdio.h>
int main()
{
    int a;
    printf("enter a numbre");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("the numner is odd");
    }
    else
        printf("THE NUMBER IS EVEN");
}