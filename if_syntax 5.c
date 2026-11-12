
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter 3 note. ");
    scanf("%d%d%d", &a, &b, &c);
    if(a > b && a > c)
    {
        printf("%d is gerastest", a);
    }
    else if (b > c && b > a)
    {
     printf("%d is greasteat", b);
    }
    else
    {
        printf("%d is greasteat", c);
    }
    return 0;
}




