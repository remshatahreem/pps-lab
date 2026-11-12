
#include <stdio.h>
int main()
{
    float p,r,t,SI;

    printf("Enter p:");
    scanf("%d",&p);
    printf("enter r:");
    scanf("%d",&r);
    printf("enter t:");
    scanf("%d",&t);
    SI=(p*r*t)/100;
    printf("SI:%.2f",SI);
    return 0;
}
