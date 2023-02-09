#include<stdio.h>

int main()
{ int num;
printf("pritnt size:");

scanf("%d", &num);

for(int i=num; i>=1; i--){
    for(int j=num; j>=1; j--){
        if(j<=i){
            printf("%d ", i);
        } else {
            printf("%d ", j);
        }
    }
    for(int k=2; k<=num; k++){
        if(i>=k){
            printf("%d ", i);
        } else {
            printf("%d ", k);
        }
    }
    printf("\n");
}

for(int i=2; i<=num; i++){
    for(int j=num; j>=1; j--){
        if(j<=i){
            printf("%d ", i);
        } else {
            printf("%d ", j);
        }
    }
    for(int k=2; k<=num; k++){
        if(i>=k){
            printf("%d ", i);
        } else {
            printf("%d ", k);
        }
    }
    printf("\n");
}

return 0;
}