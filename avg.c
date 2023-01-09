#include<stdio.h>
#include<math.h>
int main()
{
    float S1,S2,S3,S4,S5,sum,per;
    printf("Enter the values: ");
    scanf("%f %f %f %f %f",&S1,&S2,&S3,&S4,&S5);
    sum=S1+S2+S3+S4+S5;
    printf("Average of marks is:%f",sum);
    per=sum/5;
    printf("%f%%",per);
    return 0;
}