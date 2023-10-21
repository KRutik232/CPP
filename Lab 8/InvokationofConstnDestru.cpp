#include<iostream>
using namespace std;
class A
{
    public:
	A()
	{
		cout<<"Default cons of A \n ";
	}	
	~A()
	{
		cout<<"Default des of A \n ";
	}	
};
class B: public A
{
	public:
	B()
	{
		cout<<"Default cons of B \n ";
	}	
	~B()
	{
		cout<<"Default des of B \n";
	}	
};
class C: public A
{
	public:
	C()
	{
		cout<<"Default cons of C \n ";
	}	
	~C()
	{
		cout<<"Default des of C \n";
	}	
};
int main()
{
	B obj1;
	C obj2;
}
