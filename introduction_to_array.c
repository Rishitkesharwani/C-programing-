// #include<stdio.h>

// int main()
// {
//     int a[5]={10,20,30,40,50};
//     printf("Elements in array is: ");
//     for(int i=0;i<5;i++)
//     {
//         printf("%d ",a[i]);
//     }
//    return 0;
// }


#include<stdio.h>

int main()
{
    int a[5]={10,20,30,40,50};
    printf("Elements in array is: ");
    for(int i=0;i<5;i++)
   {
   if(i==0)
   {
    printf("Elements in array is %d",a[i]);
   }
   else 
   {
    printf("%d",a[i]);
   }
}
   return 0;
}