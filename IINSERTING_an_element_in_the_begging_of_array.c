#include<stdio.h>

int main()
{
    int array[1000],i,n,value;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elemnet of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&array[i]);
    }
    printf("Enter the element which you want to Enter the First place:");
    scanf("%d",&value);
      
      for(i=n-1;i>=0;i--)
      {
    array[i+1]=array[i];
      }
    array[0]=value;
    printf("Resultant array is\n");
    for(i=0;i<=n;i++)
    printf("%d\n",array[i]);
    return 0;
}