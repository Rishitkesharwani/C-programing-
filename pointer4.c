#include<stdio.h>

// int main()
// {
    // int a=10;
    // void *ptr=&a;
    // printf("%d",*((int*)ptr));
    
    // int a=10;
    // int *ptr=&a;
    // printf("%d\n",ptr);
    // printf("%d\n",*ptr);
    // **ptr2=&ptr;
    // printf("%d\n",*ptr2);
    // printf("%d\n",**ptr2);
    int add(int x, int y)
    {
    return x+y;
    }
// }
int main()
{
    int (*ptr)(int , int)=&add;
    printf("%d",(*ptr)(2,3));
    return 0;
}