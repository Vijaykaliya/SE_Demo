/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
 void main()
 
 {
     int a = 6;
     int b = 3;
     
     a+=b;  //a=a+b // 6+3=9
     printf("\n %d",a);
     
     a-=b;  //a=a-b  //9-3=6
     printf("\n %d",a);
     
     a*=b;  //a=a*b  //6*3=18
     printf("\n %d",a);
     
     a/=b;  //a=a/b  /18/3=6
     printf("\n %d",a);
     
     a%=b;  //a=a%b  //6%3=0
     printf("\n %d",a);
     
     
     getch();
 }