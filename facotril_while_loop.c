#include<stdio.h>

int main()
{
  int i=1,n,factorial=1;
printf("Enter the number whose factorial you want print:");
scanf("%d",&n);
 do 
    { 
      factorial *=i; //factorial=factorial*i
      i++;
    }

    while(i<=n);
     
    printf("The value of factorial %d is %d", n, factorial);
        return 0;
     }