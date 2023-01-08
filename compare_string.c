#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20];
    char str2[20];
    printf("Enter your first name\n");
    scanf("%s",str1);
    printf("Enter your first name\n");
    scanf("%s",str2);
    int result =0;
    int len_str1=strlen(str1);
    int len_str2=strlen(str2);
    if(len_str1==len_str2)
    {
        for(int i=0;i=='\0';i++)
        {
            if(str1 !=str2)
            {
                result++;
                break;
            }
        }
    }
    else 
    {
        printf("String are not equal");
    }
    if(result!=0)
    {
        printf("String are equal");
    }


    return 0;
}
