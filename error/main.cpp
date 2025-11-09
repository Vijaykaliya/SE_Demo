//program for method overloading
#include<iostream>
using namespace std;
  class Student
   {
     protected:
     int rno;
     char name[50];
     public:
     Student()
     {
         cout<<"\nConstructor of Student class";
     }
     void getStudent();
   };
 void Student::getStudent()
 {
     cout<<"\nEnter roll no:";
     cin>>rno;
     cout<<"\nEnter name:";
     cin>>name;
 }
 class Mark
 {
     protected:
     int h,m,e,c;
     public:
     Mark()
     {
         cout<<"\nConstructor of Marks class";
     }
     void getMark();
 };
 void Mark::getMark()
 {
     cout<<"\nEnter marks of hindi:";
     cin>>h;
     cout<<"\nEnter marks of english:";
     cin>>e;
     cout<<"\nEnter marks of maths:";
     cin>>m;
     cout<<"\nEnter marks of computer:";
     cin>>c;
 }
 class Result:public Student,public marks
 {
     public:
     {
         cout<<"\nConstructor of result class";
     }
 };
 int main()
 {
     Result R;
     return 0;
 }