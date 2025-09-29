#include<stdio.h>
#include<conio.h>
 int main()
 {
     int marks;
     
     printf("Enter Marks:");
     scanf("%d",&marks);
     
     do
     {
         printf("Pass");
     }
     while(marks>=35);
     
     return 0;
 }