#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter the values of Base and Height of trianlge: ");
    scanf("%f %f",&a,&b);
    c=0.5*a*b;
    printf( "Area of Trianlge is: %f",c);
    return 0;
}