#include<stdio.h>
#include<conio.h>
 void main()
 {
     int age = 55;
     
     if(age>=18)
     {
         printf("\n Eligible to Vote");
         
         if(age>=60)
         {
             printf("\n Senior Citizen");
         }
         else
         {
             printf("\n Young age");
         }
     }
     else
     {
         printf("Not Eligible to vote");
     }
     
     getch();
 }