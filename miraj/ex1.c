#include <stdio.h>
int main()
{
    float r, p, t, total;
    printf("enter main value\n");
    scanf("%f", &p);
    printf("enter time in year\n");
    scanf("%f", &t);
    printf("enter rate\n");
    scanf("%f", &r);
    total = (p * r * t) / 100;

    printf("%f", total);
}