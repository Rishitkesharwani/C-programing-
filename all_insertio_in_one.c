#include<stdio.h>

int main()
{
    int array[1000],i,n,value,per,position;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elemnet of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&array[i]);
    }
    n++;
    printf("Entet the 0 for begning position 1 for any position and 2 for ending position:");
    scanf("%d",&per);
    if(per==0)
    {
        printf("Enter the value which you want to insert in array:");
    scanf("%d",&value);
   for(i=n;i>1;i--)
{
    array[i-1]=array[i-2];
}
array[0]=value;
for(i=0;i<n;i++)
   {
       printf("\nElement in array are:%d",array[i]);
   }
    }
else if(per==1)
{
   printf("Enter the position where you want to enter the number:");
    scanf("%d",&position);
    if(position<0||position>n)
    {
        printf("Enter a valid index size:\n");
    }

    else
    {
    printf("Enter the element which you want to insert:");
    scanf("%d",&value);
    for(i=n;i>=position;i--)
    array[i]=array[i-1];
    
    
    array[position]=value;
    for(i=0;i<n;i++)
    {
    printf("Element in array is:%d\n",array[i]);
    }
    }
}
else if(per==2)
{
      printf("Enter the element which you want to insert in End:");
    scanf("%d",&value);
    array[n-1]=value;
                    
    printf("Resultant array is\n");
    for(i=0;i<n;i++)
    printf("%d\n",array[i]);
}
    return 0;
}