#include<stdio.h>

int main()
{
    int array[100],i,n,value;
    printf("Enter the size of array between 100:");
    scanf("%d",&n);
   
    printf("Enter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
     n++;
    printf("Enter the element which you want to insert in End:");
    scanf("%d",&value);
    array[n-1]=value;
                    
    printf("Resultant array is\n");
    for(i=0;i<n;i++)
    printf("%d\n",array[i]);
    return 0;
}