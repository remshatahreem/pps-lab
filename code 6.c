#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    float average;
    printf("enter the 1st number:");
    scanf("%d",&a);
    printf("enter the 2nd number:");
    scanf("%d",&b);
    printf("enter the 3rd number:");
    scanf("%d",&c);
    average=(a+b+c)/3;
    printf("the average of three number:%f",average);
    return 0;
}
