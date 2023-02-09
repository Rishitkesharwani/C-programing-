#include<stdio.h>

int main()
{
    float a;
    printf("Enter temperature is celcius:");
    scanf("%f",&a);
    printf("convert temperature in fahrenheit is: %f",1.8*(a+32));

    return 0;
}