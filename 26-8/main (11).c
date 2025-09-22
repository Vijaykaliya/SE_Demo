#include<stdio.h>
#include<conio.h>
 void main()
 {
     int num = 5;
     
     switch(num)
     {
         case 1: printf("\n Your Selected language is English");
         break;
         
         case 2: printf("\n Your Selected language is Hindi");
         break;
         
         case 3: printf("\n Your Selected language is Gujrati");
         break;
         
         default: printf("\n Your Number is not Valid");
         break;
     }
     
     getch();
 }