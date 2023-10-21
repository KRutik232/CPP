#include<iostream>
using namespace std;
class Student
{
	int m1,m2,m3,sum;
	public:
		Student(int a,int b,int c)
		m1=a;
		m2=b;
		m3=c;
virtual float Sportmarks()
{
	sum=m1+m2+m3;
	return sum;
}
};

class Sport
{
	int s1;
	public:
		Sport(int c)
		{
			s1=c;
		}
		virtual float Sportmarks()
		{
			return s1;
		}
};
class Result: public Student,Sport
{
	int c;
	public:
		result(int,int,int,int);
		virtual float Sportmarks();
};
result::result(int a,int m1,int m2,intm3):Student(m1,m2,m3),Sport(a)
{
	
}
float result::Sportmarks()
{
return (Student::Sportmarks()/3);
}

int main()
{
	result * ptr =new result(1,25,56,70);
	cout<<"Average: "<<ptr->Sportmarks();
	
}
