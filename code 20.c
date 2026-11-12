
#include <stdio.h>
int main()
{   float marks;
    printf("Enter marks (0-100):");
    scanf("%f",&marks);
    if (marks < 0 || marks > 100){
         printf("Invalid marks.\n");
    }
    else if  (marks < 40 ){
        printf ("Result: fail\n");
        printf ("Grade : f\n");
    }
    else if (marks >= 90) {
        printf ("Result: pass with Distinct\n");
        printf ("Grade : A+\n");
    }
    else if (marks >= 80) {
        printf ("Result: pass\n");
        printf ("Grade : A\n");
    }
    else if (marks >= 70) {
        printf ("Result: pass\n");
        printf ("Grade : B+\n");
    }
    else if (marks >= 60) {
        printf ("Result: pass\n");
        printf ("Grade : B\n");
    }

    else if (marks >= 50) {
        printf ("Result: pass\n");
        printf ("Grade : C\n");
    }
    else  {
        printf ("Result: pass \n");
        printf ("Grade : D\n");
    }
        return 0;
}
