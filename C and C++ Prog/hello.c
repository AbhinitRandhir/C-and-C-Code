// #include<stdio.h>
// //This code print hello word
// /*this code out put*/
// int main()
// {
// printf("Hello word\n");
// printf("Hello word\n");
// printf("Hello word\n");
// printf("Hello word\n");
// printf("Hello word\n");
// printf("Hello word\n");

// }

// //2
// #include<stdio.h>
// int main()
// {
//     int age=23;
//     printf("age is %d\n",age);
//     float pi=3.14;
//     printf("pi value %f\n",pi);
//     char star='*';
//     printf("star looks %c\n",star);
//     return 0;
// }

// //3
// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter age :");
//     scanf("%d",&age);
//     printf("age is %d\n",age);
//     return 0;
// }

// //4
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter a value\n");
//     scanf("%d ",&a);
//     printf("Enter b value\n");
//     scanf("%d ",&b);
//     int sum = a+b;
//     printf("sum is : %d",sum);
//     return 0;
// }

// 5
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter a value");
//     scanf("%d",&a);
//     printf("Enter b value");
//     scanf("%d",&b);
    
//     printf("sum is : %d ", a*b);
//     return 0;
// }

// 6
// #include<stdio.h>
// // area of square
// int main()
// {
//     float side;
//     printf(" enter side");
//     scanf("%f",&side);
//     printf("area ia : %f",side*side);
// }

// 7
// #include<stdio.h>
// area of circul
// int main()
// {
//     float radius;
//     printf("enter radius:");
//     scanf("%f",&radius);
//     printf("%f",3.14*radius*radius);
//     return 0;
// }

// 8
// #include<stdio.h>
// //Declaration operation
// int main()
// {
//     int oldage=22;
//     int newage=7;
//     int allage = oldage + newage;
//     printf(" all age %d",allage);
//     return 0;
// }

// 9
// #include<stdio.h>
// Arithmatic operations
// int main()
// {
//     int a=5,b=6;
//     int sum = a+b;
//     printf("sum:%d",sum);
//     return 0;
// }

// 10
// #include<stdio.h>
// #include<stdio.h>
// modular
// int main()
// {
// printf("%d\n", 16%10);
// printf("%d", -8%3);
// }

// 11
// #include<stdio.h>
// int main()
// {
//     int x=4+9*10/4-6+9%5;
//     printf("%d",x);
//     return 0;
// }

// 12
// #include<stdio.h>
// // True=1 and false=0
// int main()
// {
//     printf("%d\n",3>4);
//     printf("%d\n",4>3);
//     printf("%d\n",4>4);
//     printf("%d\n",4>=4);
//      printf("%d\n",4!=3); 
//  printf("%d\n",(4>3)&&(5>2)); 
//  printf("%d\n",(4>3)&&(5>9)); 
//  printf("%d\n",(4>3)||(5>2)); 
//  printf("%d\n",(4>3)||(5>2)); 
//  printf("%d\n",(4>9)||(5>8)); 
//  printf("%d\n",!(6>3));    
//  printf("%d\n",!(6>9)); 
//  printf("%d\n",!((6>3)&&(3>4)));          
// }

// 13
// #include<stdio.h>
// //Assignment operators
// int main()
// {
//    int a=4;
//    int b=6;
//    a+=b;
//    printf("%d\n",a);
//     a*=b;
//    printf("%d\n",a);
// }

// 14

// #include<stdio.h>
//  // division 2 or not
// int main()
// {
//     int x;
//     printf(" Enter any number :");
//     scanf("%d",&x);
//     printf("%d\n", x%2 == 0);
// }

// 15
// #include<stdio.h>
// // even = 1
// // odd = 0
// int main()
// {
//     int x;
//     printf(" Enter any number :");
//     scanf("%d",&x);
//     printf("%d\n", x%2 == 0);
// }

// 16
// #include<stdio.h>
// // x<9 and x>100
// int main()
// {
//     int x;
//     printf(" Enter any number :");
//     scanf("%d",&x);
//     printf("%d\n", x>9 && x<100);
// }

// 17
// #include<stdio.h>
// // age>18 adult
// int main()
// {
//     int age;
//     printf("Enter any age:\n");
//     scanf("%d",&age);
//     if(age>18)
//     {
//         printf("Adult\n");\
//         printf("they can vote\n");
//     }
//     else
//     {
//       printf("Not Adult\n");
//     }
// }

// 18
// #include<stdio.h>
// age>18 adult
// int main()
// {
//     int age;
//     printf("Enter any age:\n");
//     scanf("%d",&age);
//     if(age>=18)
//     {
//         printf("Adult\n");
        
//     }
//     else if(age > 13 && age < 18)
//     {
//         printf("teenager\n");
//     }
//     else
//     {
//       printf(" Child\n");
//     }
// }

// 19
// #include<stdio.h>
// // All day name
// int main()
// {
//     int day;
//     printf(" Enter day(1-7)\n");
//     scanf("%d",&day);
//     switch (day)
//     {
//     case 1: printf("Monday\n");
//             break;
//      case 2: printf("Tuesday\n");
//             break;
//      case 3: printf("Wednesday\n");
//             break;
//      case 4: printf("Thursday\n");
//             break;
//      case 5: printf("Friday\n");
//             break;
//      case 6: printf("Saturday\n");
//             break;
//      case 7: printf("sunday\n");
//             break;
//             default: printf("not a valid day!\n");
//     }
// }

// 20
// #include<stdio.h>
// // loop control for loop
// int main()
// {
//   for(int i=3; i<=30;i=i+3)
//   {
//     printf("%d\n",i);
//   }   
// }

// 21
// #include<stdio.h>
// //while loop
// int main()
// {
// int n;
// printf("Enter a number:\n");
// scanf("%d",&n);
// int i=0;
// while(i<=n)
// {
//   printf("%d\n",i);
//   i++;
// }
// return 0;
// }

// 22
// #include<stdio.h>
// int main()
// {
//   int n;
//   printf("Enter a number\n");
//   scanf("%d",&n);
//   int sum = 0;
//   for(int i=1, j=n; i<=n && j>=1; i++, j--)
//   {
//   sum=sum+i;
// }
//  printf(" sum is %d\n",sum);

// }

// 23
// #include<stdio.h>
// int main()
// {
//   int n;
//   printf(" Enter a number:");
//   scanf("%d",&n);
//   for(int i=1; i<=10;i++)
//   {
//     printf("%d\n",n*i);
//   }
//   return 0;
// }

// 24
// #include<stdio.h>
// int main()
// {
//   int n;
//   do{
//     printf("Enter a number:");
//     scanf("%d",&n);
//     printf("%d\n",n);
//     if(n%2 != 0)
//     {
//       break;
//     }
//   }
//   while(1);
//   printf("Thank you\n");
// }

// 25
// #include<stdio.h>
// int main()
// {
//   int n;
//   do{
//     printf("Enter a number:");
//     scanf("%d",&n);
//     printf("%d\n",n);
//     if(n%7 == 0)
//     {
//       break;
//     }
//   }
//   while(1);
//   printf("Thank you\n");
// }

// 26
// #include<stdio.h>
// //continue statement
// int main()
// {
//   for (int i=1; i<=10; i++)
//   {
//   if(i == 6)
//   {
//   continue;
//   }
  
//     printf("%d\n",i);
//   }
//   return 0;
// }

// 27
// #include<stdio.h>
// //continue statement
// int main()
// {
//   for (int i=5; i<=50; i++)
//   {
//   if(i % 2 != 0)
//   {
//   continue;
//   //odd number
//   }
  
//     printf("%d\n",i);
//   }
//   return 0;
// }

// 28
// #include<stdio.h>
// // factorial code
// int main()
// {
//   int n;
//   printf("Enter a number:");
//   scanf("%d",&n);
//   int fact = 1;
//   for(int i=1;i<=n;i++)
//   {
//     fact=fact*i;
//   }
// printf("final factorial is %d",fact);
// return 0;
// }

// 29
// #include<stdio.h>
// //revers tebal code
// int main()
// {
//   int n;
//   printf(" Enter a number:");
//   scanf("%d",&n);
//   for(int i=10; i>=1;i--)
//   {
//     printf("%d\n",n*i);
//   }
//   return 0;
// }

// 30
// #include<stdio.h>
// //5 to 50 all sum
// int main()
// {
//   int sum = 0;
//   for(int i=5; i<=50; i++){
//   sum += i;
// }
// printf("Sum is %d",sum);
// return 0;
// }

// 31
// #include<stdio.h>
// //function code
// void namaste();
// void bonjour();

// int main()
// {
//   printf("Enter f for french & i for indian :");
//   char ch;
//   scanf("%c",&ch);

//   if(ch == 'i')
//   {
//     namaste();
//   }
//   else{
//     bonjour();
//   }
// return 0;
// }

// void namaste()
// {
//   printf("namaste\n");
// }
// void bonjour()
// {
//   printf("bonjour\n");
// }

// 32
// #include<stdio.h>
// //function use code
//     void calculateprice(float value);
//     int main()
// {
//     float value = 100.0;
//     calculateprice(value);
//     printf("value is : %f\n",value);
//     return 0;
// }
// void calculateprice(float value)
// {
//     value = value+(0.18 * value);
//     printf(" final price is :%f\n",value);
// }

// 33
// #include<stdio.h>
// #include<stdio.h>
// //function use code square
//     void calculateprice(float value);
//     int main()
// {
//     int n=4;
//     printf("%f",pow(n,2));
//     return 0;
// }

// 34
// #include<stdio.h>
// #include<math.h>
// //function use code
// float squareArea(float side);
// float circlearea(float rad);
// float rectangleArea(float a, float b);
// int main()
// {
//     float a=5.0;
//     float b=10.0;
//     printf(" area is : %f",rectangleArea(a, b));
//     return 0;
// }
// float squareArea(float side)
// {
//     return side*side;
// }
// float circleArea(float rad)
// {
//     return 3.14*rad*rad;
// }
// float reactangleArea(float a, float b)
// {
//     return a*b;
// }
    
// 35
// #include<stdio.h>
// //factorial number using recursion
// int fact(int n);
// int main()
// {
//     printf("factorial is :%d",fact(7));
//     return 0;
// }
// int fact(int n)
// {
//     if(n == 0)
//     {
//         return 1;
//     }
//     int factNm = fact(n-1);
//     int factN = factNm*n;
//     return factN;
// }

// 36
// #include<stdio.h>
// float convertTemp(float celsius);
// int main()
// {
//     float far = convertTemp(37);
//     printf("far : %f",far);
//     return 0;
// }
// float convertTemp(float celsius)
// {
//     float far = celsius * (9.0/5.0)+32;
//     return far;
// }

// 37
// #include<stdio.h>
// // Percentage 
// int calcPercenage(int science, int math, int hindi);
// int main()
// {
//     int sc = 95;
//     int math = 94;
//     int hindi = 97;
//     printf("percentage is :%d", calcPercentage(sc,math,hindi));
//     return 0;
// }

// int calcPercentage(int science, int math, int hindi)
// {
//     return((science+math+hindi)/3);
// }

// 38
// #include<stdio.h>
// //Pointer use code
// int main()
// {
//     int age = 22;
//     int *ptr = &age;
//     printf("%d\n",age);
//     printf("%d\n",*ptr);
//     printf("%d\n",*(&age));

// }

// 39
// #include<stdio.h>
// //pointer to pointer
// int main()
// {
//     int i=5;
//     int *ptr=&i;
//     int **pptr = &ptr;
//     printf("%d\n",**pptr);
// }

// 40
// #include<stdio.h>
// //call by swap recorsion
// void swap(int a, int b);
// void _swap(int *a, int*b);
// int main()
// {
//     int x=3,y=5;
//     _swap(&x,&y);
//     printf("x =%d & y = %d\n",x,y);
//     return 0;
// }
// //call by reference
// void _swap(int *a,int*b)
// {
//     int t=*a;
//     *a=*b;
//     *b=t;
    
// }
// //call by value
// void swap(int a, int b)
// {
//     int t=a;
//     a=b;
//     b=t;
//     printf("a =%d & b=%d\n",a,b);
// }

// 41
// #include<stdio.h>
// //Arrays code
// int main()
// {
//     float price[3];
//     printf("Enter 3 prices : ");
//     scanf("%f",&price[0]);
//     scanf("%f",&price[1]);
//     scanf("%f",&price[2]);

//  printf("Total price 1 : %f \n",price[0]+(0.18*price[0]));
// printf("Total price 2 : %f \n",price[1]+(0.18*price[1]));
//  printf("Total price 3 : %f \n",price[2]+(0.18*price[2]));
//  return 0;
// }

// 42
// #include<stdio.h>
// //pointer
// int main()
// {
//     int age = 22;
//     int *ptr =&age;
//     printf("ptr = %u\n",ptr);
//     ptr++;
//     printf("ptr = %u\n", ptr);
//     ptr--;
//     printf("ptr = %u\n",ptr);
//     return 0;
// }

// 43
// #include<stdio.h>
// int main()
// {
//     int aadhar[5];
//     int *ptr = &aadhar[0];
//     for(int i=0; i<5; i++)
//     {
//         printf("%d index : ",i);
//         scanf("%d",(ptr+1));
//     }
//     for(int i=0; i<5; i++)
//     {
//         printf("%d index = %d\n",i,*(ptr+i));
//     }
// }

// //44
// #include<stdio.h>\
// //1D array
// void printnumbers(int arr[],int n);
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10};
//     printnumbers(arr,5);
//     return 0;
// }
//  void printnumbers(int arr[],int n)
//  {
//    for(int i=0; i<n; i++)
//  {
// printf("%d\t",arr[i]);
//  }
//  }

// 45
// #include<stdio.h>
// functio to reverse  using Array
 