#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("enter the number:");
    scanf("%d",n);
    for(int i=0;i<n;i++)
    {
        if(n%i==0)
        { 
            sum=sum+n;
        }
    }
        if(n==sum)
        {
            printf("Perfcet");
        }
        else
        {
            printf("not perfect number");
        }
    
    
     
    return 0;
}