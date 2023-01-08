#include<stdio.h>
#include<string.h>

int main()
{
    char user[20];
    printf("Enter the String:\n");
    scanf("%s",user);
    printf("Your name is %s",user);
    printf("\n the lenght is %d",strlen(user));
    // strrev(user);
    // printf("\n The rev of this string is %s",user);
    char name[20];
    printf("\n The sting copy is %s",strcpy(name,user));
    printf("\n The sting cont is %s",strcat(name,user));
    printf("\n The string counnt is %d",strcmp(name,user));
    if(strcmp(user,name)==0)
    {
        printf("\n String are equal");
    }
    else
    {
         printf("\n Not equal");
}
    return 0;
}  

                  //////////////////////////////////////
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char str[20];
//     gets(str);
//     puts(str);
//     printf("the lenght is %d",strlen(str));



//     return 0;
// }