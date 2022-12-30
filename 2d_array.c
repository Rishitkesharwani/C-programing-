#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter the size of 1st and 2nd arrary respectively:");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Enter the element of arrary:");
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    
        scanf("%d",&a[i][j]);
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}