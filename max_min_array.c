#include<stdio.h>

int main()
{
    int n,max,min;
    
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(int i=0;i<n;i++)
    {
        if (a[i]>max)
          {
            max=a[i];
          }
          else if (a[i]<min)
          {
            min =a[i];
          }
}
        printf("Maximum number is %d\n",max);
        printf("Minimum number is %d",min);

    return 0;
}