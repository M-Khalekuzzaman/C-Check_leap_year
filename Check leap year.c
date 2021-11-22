#include<stdio.h>
int main()
{
    int year;
    printf("Input year:");
    scanf("%d",&year);

    if ((year % 400) == 0)
        printf("Leap year");
         else if ((year % 100) == 0)
        printf("Not leap year");
    else if ((year % 4) == 0)
        printf(" leap year");
    else
        printf("Not a leap year");
}
