#include<stdio.h>

int main()
{
    int percent;
    printf("Enter How much percent you gain:");
    scanf("%d",&percent);
    switch(percent/10)
    {
        case 10:printf("You got A grade");
        break;
        case 9:printf("You got B grade");
        break;
        case 8:printf("You got C grade");
        break;
        case 7:printf("You got D grade");
        break;
        case 6:printf("You got E grade");
        break;
        case 5:case 4: case 3: case 2: case 1: case 0:printf("Yor are fail");
        break;
       
    }
    return 0;
}