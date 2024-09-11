#include <stdio.h>
int main()
{
    int maths, sci, eng, total, per;
    printf("enter marks in maths:");
    scanf("%d", &maths);
    printf("enter marks in sci:");
    scanf("%d", &sci);
    printf("enter marks in eng:");
    scanf("%d", &eng);
    total = maths + sci + eng;
    printf("%d\n", total);
    per = total / 3;
    printf("%d\n", per);
    if (per < 33)
    {
        printf("fail");
    }
    else if (per > 33 && per < 60)
    {
        printf("grad=c");
    }
    else if (per > 60 && per < 80)
    {
        printf("grad=b");
    }
    else if (per > 80 && per < 100)
    {
        printf("grad=A");
    }
}
