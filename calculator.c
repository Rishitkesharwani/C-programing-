#include <stdio.h>
#include <math.h>

int main() {

  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /,^,%%): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%lf",first + second);
      break;
    case '-':
      printf("%lf",first - second);
      break;
    case '*':
      printf("%lf",first * second);
      break;
    case '/':
      printf("%lf",first / second);
      break;
      case '^':
      printf("%lf", pow(first,second));
      break;
      case '%':
      printf("%lf",(first*100)/second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

return 0;
}

//Second method


// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     int sum,subst,multi,division,power,operation;
//     float  a,b,percent;
//     printf("Enter the value of a and b: ");
//     scanf("%f %f",&a,&b);
//     printf("Enter the operation you want to do 1 for sum, 2 for substraction, 3 for multiplication and 4 for divison, 5 for power, 6 for percent:");
//     scanf("%d",&operation);
//     sum= a+b;
//     subst= a-b;
//     multi=a*b;
//     division=a/b;
//     power=pow(a,b);
//     percent=(a*100)/b;

//     switch(operation)
//     {
//     case 1:printf("%d",sum);
//     break;
//     case 2:printf("%d",subst);
//     break;
//     case 3:printf("%d",multi);
//     break;
//     case 4:printf("%d",division);
//     break;
//     case 5:printf("%d",power);
//     break;
//     case 6:printf("%f%%",percent);
//     break;
   
// }
    

//     return 0;
// }