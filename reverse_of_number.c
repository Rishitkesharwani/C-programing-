                      // Reverse of number (you will get the reverse of number)
#include<stdio.h>
 
 int main()
 {
  int number,temp,rem,sum=0;
  printf("Enter the number:");
  scanf("%d",&number);
  temp=number;
  while(number>0)
  {
    rem =number%10;
    sum=sum*10+rem;
    number/=10;
  }
  printf("Reverse of number is %d",sum);
  return 0;
 }