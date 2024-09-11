#include <stdio.h>
int main()
{
    float a, b;
    printf("enter first number:");
    scanf("%f", &a);

    printf("enter second number:");
    scanf("%f", &b);
    
    printf("%f\n", a + b);
    printf("%f\n", a - b);
    printf("%f\n", a * b);
    printf("%f\n", a / b);
}