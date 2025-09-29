#include<stdio.h>
#include<conio.h>
 void main()
 {
     int num, i;
     
     printf("Enter Any Number:");
     scanf("%d",&num);
     
     int sum = 0;
      
     for(i=1; i<=10; i++)
     {
          sum = num*i;
         
     }
     printf("\n %d * %d = %d",num,i,sum);
     
     getch();
 }