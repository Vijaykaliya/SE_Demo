/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
  void main()
  
  {
      float pi = 3.14;
      int r;
      
      printf("Enter Radius");
      scanf("%d",&r);
      
      float ans = pi*r*r;
      printf("%f",ans);
      
      getch();
  }