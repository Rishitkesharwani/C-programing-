#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter the values: ");
    scanf("%f %f",&a,&b);
    c=pow(a,b);
    printf( "%f",c);
    return 0;
}