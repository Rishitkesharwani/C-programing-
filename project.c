#include <stdio.h>

int main()
{

  int start, end, jump;
  int command;
  printf("Enter starting number:");
  scanf("%d", &start);
  printf("Enter ending number:");
  scanf("%d", &end);
  printf("Enter jump number:");
  scanf("%d", &jump);
  printf("Enter 0 for accending and 1 for decending:");
  scanf("%d",&command);
  if (command==0)
  {
    for (start; start <= end; start = start + jump)
    {
      printf("%d\n", start);
    }
  }

  else if (command ==1)
  {
    for (end; end >= start ; end = end - jump)
    {
      printf("%d\n", end);
    }
  }

  return 0;
}