// /*Using while  loop*/
// #include<stdio.h>

// int main()
// {
//   int a,sum;
// printf("Enter form where youn want to start");
// scanf("%d",&a);
// sum=a/10;
// while(sum);
// a++;
// return 0;
// }
         
         
         
         
                                             //patern priting 1
      // #include<stdio.h>
      
      // int main()
      // {
      //   for(int i=1;i<=5;i++)
      //   {                               //output
      //       for(int j=1;j<=5;j++)       // 11111
      //       {                           // 22222
      //           printf("%d",i);         // 33333
      //       }                           // 44444
      //       printf("\n");               // 55555
        
      //   }

      //   return 0;
      // }
                            
                              // printing patter 2
  //  #include<stdio.h>
   
  //  int main()
  //  {
  //   for(int i=1;i<=5;i++)                       //output 
  //                                                  //11111
  //   {                                              //2222
  //       for(int j=5;j>=i;j--)                      //333
  //       {                                          //44
  //            printf("%d",i);                       //5
  //       }
  //       printf("\n");
  //   }
  //   return 0;
  //  }

                        //printing pattern 3
      //  #include<stdio.h>
       
      //  int main()
      //  {
      //                                                        // output
      //   for(int i=1;i<=5;i++)                               //  *****
      //   {                                                   //  ****
      //       for(int j=5;j>=i;j--)                            // ***
      //   {                                                   //  **
      //       printf("*");                                     // * 
      //       }
      //   printf("\n");
      //   }
      //   return 0;
      //  }
            

                    
                  

                              
                       
                         //print pattern 4 
  //output
       /*0
         10
         010
         1010
         01010*/

// #include<stdio.h>
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++)
//   {
//     for(j=1;j<=i;j++)
//     {
//       if((i+j)%2==0)               
//       {
//         printf("0");
//       }
//       else
//       { 
//         printf("1");
//       }
      
//     }
//     printf("\n");
//   }
//   return 0;
// }
                  
                             // petteren 5
                          //output 
                          //1111
                          //2222
                          //3333
                          //4444

//  #include<stdio.h>
 
//  int main()
//  {
//   for(int i=1;i<5;i++)
//   {
//     for(int j=1;j<5;j++)
//     {
//       printf("%d",i);
//     }
//     printf("\n");
//   }
//   return 0;
//  }


                    //printing pattern 3
      //  #include<stdio.h>
       
      //  int main()
      //  {
      //                                                        // output
      //   for(int i=1;i<=5;i++)                               //  *****
      //   {                                                   //  ****
      //       for(int j=5;j>=i;j--)                            // ***
      //   {                                                   //  **
      //       printf("*");                                     // * 
      //       }
      //   printf("\n");
      //   }
      //   return 0;
      //  }
                     
                               // petern printing 
  //      #include<stdio.h>
   
  //  int main()
  //  {
  //   for(int i=1;i<=4;i++)                       //output 
  //                                                  //1
  //   {                                              //22
  //       for(int j=1;j<=i;j++)                      //333
  //       {                                          //4444
  //            printf("%d",i);                       
  //       }
  //       printf("\n");
  //   }
  //   return 0;
  //  }
                              // printing pattern
                              //output
                                           //1234
                                           //1234
                                           //1234
                                           //1234
  //  #include<stdio.h>
   
  //  int main()
  //  {
  //   for(int i=1;i<=4;i++)
  //   {
  //     for(int j=1;j<=4;j++)
  //     {
  //       printf("%d",j);
  //     }
  //     printf("\n");
  //   }
  //   return 0;
  //  }
                 // printing patter
                 //output
                         // ABCD
                         // ABCD
                         // ABCD
                         // ABCD
  // #include<stdio.h>
   
  //  int main()
  //  {
  //   for(char i='A';i<='D';i++)
  //   {
  //     for(char j='A';j<='D';j++)
  //     {
  //       printf("%c",j);
  //     }
  //     printf("\n");
  //   }
  //   return 0;
  //  }
               
                // printting pattern
                // output 
                          //EEEE
                          //DDDD
                          //CCCC
                          //BBBB
                          //AAAA
  //  #include<stdio.h>
   
  //  int main()
  //  {
  //   for(char i='D';i>='A';i--)
  //   {
  //     for(char j='D';j>='A';j--)
  //     {
  //       printf("%c",i);
  //     }
  //     printf("\n");
  //   }
  //   return 0;
  //  }
             
             // printing pattern
             // output 
                         //DCBA
                         //DCBA
                         //DCBA
                         //DCBA
  //   #include<stdio.h>
   
  //  int main()
  //  {
  //   for(char i='D';i>='A';i--)
  //   {
  //     for(char j='D';j>='A';j--)
  //     {
  //       printf("%c",j);
  //     }
  //     printf("\n");
  //   }
  //   return 0;
  //  }

                                        // printing patter
                                        //output 
                                        // @
                                        // @#
                                        // @#@
                                       // @#@#
// #include<stdio.h>
//  int main()
//    {
//     for(int i=1;i<=4;i++)                       
                                                   
//     {                                              
//         for(int j=1;j<=i;j++)                      
//         {                                          
//           if(j%2)
//           {
//            printf("@");   
//           }    
//           else
//         {
          
//           printf("#");
//         }   

//         }
        
//         printf("\n");
//     }
//     return 0;
//    }

                        // printing patter
                        // output
                        // 1
                        //   1
                        // 1   1
                        //   1   1
                        // 1   1   1
//   #include<stdio.h>
//  int main()
//    {
//     for(int i=1;i<=5;i++)                       
                                                   
//     {                                              
//         for(int j=1;j<=i;j++)                      
//         {                                          
//           if((i+j)%2==0)
//           {
//            printf("1");   
//           }    
//           else
//         {
          
//           printf("  ");
//         }   

//         }
        
//         printf("\n");
//     }
//     return 0;
//    }
                     //printing  pattern 
                     // output 
                     // @
                     // ##
                     // @@@
                     // ####

// #include<stdio.h>

//  int main()
//    {
//     for(int i=1;i<=4;i++)                       
                                                   
//     {                                              
//         for(int j=1;j<=i;j++)                      
//         {                                          
//           if(i%2)
//           {
//            printf("@");   
//           }    
//           else
//         {
          
//           printf("#");
//         }   

//         }
        
//         printf("\n");
//     }
//     return 0;
//    }
                            // printing pattern 
                            //output 
                          // 5
                          // 43
                          // 210
                          // -1-2-3-4
//  #include<stdio.h>
 
//  int main()
//  {
//   int c=5;
//   for(int i=1;i<=4;i++)
//   {
//     for(int j=1;j<=i;j++)
//     {               
//       printf("%d",c);
//       c--;   
//     }
//     printf("\n");
//   }
//   return 0;
//  }

              // printing patter 
              // output 
                         // 1
                         // 23
                         // 456
                         // 78910
//   #include<stdio.h>
 
//  int main()
//  {
//   int c=1;
//   for(int i=1;i<=4;i++)
//   {
//     for(int j=1;j<=i;j++)
//     {               
//       printf("%d ",c);
//       c++;   
//     }
//     printf("\n");
//   }
//   return 0;
//  }
 


//                                   //
 #include<stdio.h>
 
 int main()
 {
  int x=4,y=0,z;
  while(x>=0)
  {
    x--;
    y++;
    if(x==y)
    continue;
    else
    printf("\n%d %d",x,y);

  }
  return 0;
 }


