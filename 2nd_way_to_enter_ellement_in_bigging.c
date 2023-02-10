#include<stdio.h>

int main()
{
    int n,value,i,a[100];
    printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the element pf array:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
n++;
printf("Enter the value:");
scanf("%d",&value);
for(i=n;i>1;i--)
{
a[i-1]=a[i-2];
}
a[0]=value;
for(i=0;i<n;i++)
{
    printf("\nElement in array are:%d",a[i]);
}
    return 0;
}