#include<stdio.h>

int main()
{
   
  int start,end,jump;
  printf("Enter starting number:");
   scanf("%d",&start);
   printf("Enter ending number:");
   scanf("%d",&end);
   printf("Enter jump number:");
   scanf("%d",&jump);
   for(start;start<=end;start=start+jump)
   {
   printf("%d\n",start);
   }
    return 0;
}