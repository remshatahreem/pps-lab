
#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter cp and sp");
    scanf("%d%d", &cp,&sp);
    if(cp == sp)
    {
        printf("%d is the profit", cp);
    }
    else if (cp>sp)
    {
     printf("%d is the loss", sp);
    }

    return 0;
}
