#include <stdio.h>
int main()
{
    int a, b, total, c;

    printf("enter first number:");
    scanf("%d", &a);

    printf("enter second number:");
    scanf("%d", &b);
    printf("enter number:");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("%d", a + b);
        break;
    case 2:
        printf("%d", a - b);
        break;
    case 3:
        printf("%d", a * b);
        break;
    case 4:
        printf("%d", a / b);
        break;
    default:
        printf("invild inpute");
    }
}