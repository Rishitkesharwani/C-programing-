#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element in array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}