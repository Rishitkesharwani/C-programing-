#include<stdio.h>

int main()
{
    int n,temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of arrary:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
       
    }
     for(int i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
    return 0;
}