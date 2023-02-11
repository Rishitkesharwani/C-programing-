#include<stdio.h>
int main()
{
    int arr[100];
    int l;
    scanf("%d",&l);
    for(int i =0;i<l;i++)
    scanf("%d",&arr[i]);
    int pos,ele;
    printf("Enter the  pos:");
    scanf("%d",&pos);
    printf("Enter the elemnt:");
    scanf("%d",&ele);
    for(int j =l;j>=pos;j--)
    {
        arr[j]=arr[j-1];

    }
    arr[pos-1]= ele;
    for(int i =0;i<=l;i++)
    printf("%d ",arr[i]);
    return 0;
}
