/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
 void main()
 {
     int a,b;
     printf("Enter a: ");
     scanf("%d",&a);
     printf("Enter b: ");
     scanf("%d",&b);
     
     int add = a+b;
     printf("%d",add);
     
     int sub = a-b;
     printf("\n%d",sub);
     
     int mul = a*b;
     printf("\n%d",mul);
     
     int div1 = a/b;
     printf("\n%d",div1);
     
     
     
     getch();
 }
 
 