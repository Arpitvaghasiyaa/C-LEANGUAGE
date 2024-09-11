#include<stdio.h>
int main ()
{
    int days;
    printf("enter number between 1 to 7 :");
    scanf("%d",&days);
    switch(days){
        case 1:
        printf("monday");
        break;
        case 2:
        printf("maglwar");
        break;
        case 3:
        printf("budhwar");
        break;
        case 4:
        printf("guruwar");
        break;
        case 5:
        printf("shukrawar");
        break;
        case 6:
        printf("shniwar");
        break;
        case 7:
        printf("sunday");
        break;
        default:
        printf("plaese check number");
}

}