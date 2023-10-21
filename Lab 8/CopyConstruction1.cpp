//Program 1 for Copy Constructor

#include<iostream>
using namespace std;
class complex
{
	int real, img;
	public:
		complex(int, int);
		
			void show()
			{
			cout <<real<<"+"<<img<<"i"<<endl;
	     	}
};

complex::complex(int r, int i)
{
	real=r;
	img=i;
}
int main()
{
	complex c1(1,2);
	complex c2(c1);
	c1.show();
	c2.show();
}
