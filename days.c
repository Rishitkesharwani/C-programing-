#include<stdio.h>

int main()
{
    int a;
    printf("Enter number of days:");
    scanf("%d",&a);
    printf("days in year: %d \n",a/365);
    printf("days in weeks: %d \n",(a%365)/7);
    printf("days in days: %d ", (a%365)%7);
    return 0;
}