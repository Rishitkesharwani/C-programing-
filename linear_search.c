#include<stdio.h>

int main()
{
    int n,find,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element whose position you want ot find you want ot find:");
    scanf("%d",&find);
    for(i=0;i<n;i++)
    {
        if( a[i]==find)
        {
            printf("Find at the Index:%d",i);
            break;
        }
    
       else
        {
            printf("\nElement not found:");
            break;
        }
    }
    return 0;
}

                                    //another way
//  #include<stdio.h>
 
//  int main()
//  {
//     int n,i,find,count=0;
//     printf("Enter the size of arrary:");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the element of array:");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the number which postion you want ot find:");
//     scanf("%d",&find);
//     for(i=0;i<n;i++)
//     {
//         if (a[i]==find)
//         {
//             printf("%d",i);
//            count++;
//         }
       
        
//     }
//     if(count==0)
//     {
//         printf("Element not found");
//     }
//     else 
//     {
//         printf("\ncount of give number is %d",count);
//     }
//     return 0;
//  }                                  