#include<stdio.h>

int main()
{
    int n,b;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=(n-1);i>=0;i--)
    {
         printf("%d ",a[i]);
    }
    
    return 0;
}