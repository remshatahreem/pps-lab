#include <stdio.h>

int main()

{
    int length;
    int breadth;
    int area;

    printf ( "enter the length of the rectrangle:");
    scanf("%d",&length);
    printf("enter the breadth of the rectrangle:");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("the area of rectrangle:%d",area);
    return 0;

}
