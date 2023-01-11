#include<stdio.h>
 
 int main()
 {
  int n;
printf("Enter the number whose factor you want print:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
  if(n%i==0)
  
  printf("%d ",i);
  
}
return 0;
 }