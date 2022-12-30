#include<stdio.h>

int main()
{
    int  n;
    float sum=0;
    float avg;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    avg=sum/n;
    printf("Average of arrary is:%f",avg);
    return 0;
}