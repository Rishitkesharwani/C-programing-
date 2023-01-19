//                     //fabonaci sereies (sum of the previous 2 term become the next term)
// #include<stdio.h>
// int main()
// {
//   int n,a=0,b=1,nxt_term=0;
//   printf("enter a no:");
//   scanf("%d",&n);
//   printf("fibonacci series:%d,%d,",a,b);
//   nxt_term=a+b;
//   while(nxt_term<=n)
//   {
//       printf("%d,",nxt_term);
//       a=b;
//       b=nxt_term;
//       nxt_term=a+b;
//   }
//   return 0;
// }

                              // fabonaci series using for (sum of the previous 2 term become the next term)
   #include<stdio.h>
   
   int main()
   {
    int a=0,b=1,c,n;
    printf("Enter the number up to which you want to print:");
    scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
    printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
   }
    return 0;
   }

