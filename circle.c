#include<stdio.h>

int main()
{
    float a,pie=3.14;
    printf("Enter the value of radius:");
    scanf("%f" ,&a);
    printf("Diameter of circle is %f\n",2*a);
    printf("Circumference of circle %f\n",2*pie*a);
    printf("Area of circle is %f",pie*a*a);
    return 0;
}