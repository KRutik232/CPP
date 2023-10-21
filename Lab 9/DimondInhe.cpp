#include<iostream>
using namespace std;
 class A 
{
	int p;
public:
	A()
	{
		cout<<"in default of A class\n";
	}
	
};
class B: public A
{
	int q;
public:
	B()
	{
		cout<<"in default of B class\n";
	}
};
class C:virtual public A
{
	int r;
public:
	C()
	{
		cout<<"in default of C class\n";
	}
};
class D: public B,C
{
	int s;
public:
	D()
	{
		cout<<"in default of d class\n";
	}
};
int main()
{
	D obj;
}
