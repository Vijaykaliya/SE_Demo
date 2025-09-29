#include<stdio.h>
#include<conio.h>
 int main()
 {
     int num, sum=0;
     
     printf("Enter Num:");
     scanf("%d",&num);
     
     while(num>0)
     {
         int rem = num%10;
         num = num/10;
         sum += rem;
     }
     
     printf("Sum of all digits are: %d",sum);
     
     return 0;
 }