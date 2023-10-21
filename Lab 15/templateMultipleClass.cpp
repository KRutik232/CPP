#include<iostream>
using namespace std;
 template <class Student, class Teacher>
 void result(Student &marks, Teacher &status)
 {
 
 cout<<"Marks scored by student is "<<marks<<endl;
 cout<<"Result of student is "<<status<<endl;
}
 int main()
 {
  int marks=80;
 string Status="pass";
 result(marks,Status);
}
 
 
