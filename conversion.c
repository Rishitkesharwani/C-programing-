#include<stdio.h>

int main()
{
    float a;
    printf("Enter the value in centimenter\n");
    scanf("%f",&a);
    printf("The value of lenght in meter is %f\n",a/100);
    printf("The of lenght in km is %f",a/100000);
    return 0;
}