#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,r;
    printf("Enter Principle value:\n");
    scanf("%d",p);
    printf("Enter rate:\n");
    scanf("%d",&r);
    printf("Enter time period:\n");
    scanf("%d",&t);
    float amt;
    amt=(1+r/100);
    printf("Compound intrest is: %f",p*pow(amt,t));
    return 0;
}