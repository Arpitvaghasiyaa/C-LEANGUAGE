#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d", &b);
    printf("enter third number:");
    scanf("%d", &c);

    d = a;
    a = b;
    b = c;
    c = d;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}