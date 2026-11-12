
#include<stdio.h>
int main()
{
    int a;
    printf("Type a number");
    scanf("%d", &a);
    if(a == 0)
    {
        printf("zero");
    }
    else if(a > 0)
    {
        printf("positive");
    }
    else
    {
     printf("Negative");
    }
    return 0;
}
