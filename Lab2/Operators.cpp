// implement all c++ operators
#include<iostream>
using namespace std;
int main()
{
int a,b,c=0,d;
int e=1,f=0;
	cout<<" Take values from user a & b"<<endl;
    cin>>d>>b;
	cout<<"*********Assignment Operator***********"<<endl;
	a=d;
	cout<<"Assignment Operator 'a=b'"<<a<<endl;
	a+=b;
	cout<<"Addition Assignment Operator a+=b "<<a<<endl;
	a-=b;
	cout<<"Substraction Assignment Operator 'a-=b' "<<a<<endl;
	a*=b;
	cout<<"Multiplication Assignment Operator 'a*=b' "<<a<<endl;
	a/=b;
	cout<<"Division Assignment Operator 'a/=b' "<<a<<endl;
	a%=b;
	cout<<"Modulus Assignment Operator 'a%=b' "<<a<<endl;
	
	cout<<"*********Arithmatic Operators************"<<endl;
	c=a+b;
	cout<<"Addition Operator 'c=a+b' "<<c<<endl;
	c=a-b;
	cout<<"Substraction Operator 'c=a-b' "<<c<<endl;
	c=a*b;
	cout<<"Multiplication Operator 'c=a*b' "<<c<<endl;
	c=a/b;
	cout<<"Division Operator 'a/b' "<<c<<endl;
	c=a%b;
	cout<<"Modulus Operator 'a%b' "<<c<<endl;
	
	cout<<"Post Increment Operator 'a++' "<<a++<<endl;
	cout<<"Pre Increment Operator '++a' "<<++a<<endl;
	cout<<"Post Decrement Operator 'a--' "<<a--<<endl;
	cout<<"Pre Decrement Operator '--a' "<<--a<<endl;
	cout<<"*******************logical program******************"<<endl;
	if(e&&f)
	cout<<"&& true"<<endl;
	else
	cout<<"&& false"<<endl;
	if(e||f)
	cout<<"|| true"<<endl;
	else
	cout<<"|| false"<<endl;
	if(!(e<f))
	cout<<"! true"<<endl;
	else
	cout<<"! false"<<endl;
	
	
	
}
