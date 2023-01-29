
 #include<stdio.h>
 
 int main()
 {
  int num,rem,sum=0;
  printf("Enter the number");
  scanf("%d",&num);

  while(num>9)
  {
    while(num>0)
  {
     rem=num%10;
     sum=sum+rem;
     num=num/10;
  }
  num=sum;
  sum=0;
  }
  if(num==1)
  {
    printf("Magic number");
  }
  else
  printf("Not Magic number");
  return 0;
 }