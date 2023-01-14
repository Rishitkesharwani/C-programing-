#include<stdio.h>

int main()
{
    float percent;
    printf("Enter How much percentage you gain:");
    scanf("%f",&percent);
    switch(percent>=90)
    {
        case 1: printf("You got A grade");
        break;
        case 0: switch(percent>=80)
        {
            case 1:printf("you got b grade");
            break;
            case 0:switch(percent>=70)
            {
                case 1: printf("You got B Grade");
                break;
                case 0: switch(percent>=60)
                {
                    case 1: printf("You got C Grade");
                    break;
                    case 0: switch(percent>=50)
                    {
                        case 1: printf("You Got D Grade");
                        break;
                        case 0: switch(percent>=40)
                        {
                            case 1: printf("You Got E Grade");
                            break;
                            case 0: printf("You are Fail");
                            break;
                        }
                
                    }
                }
        
            }
            break;
        }
    }
    return 0;
}