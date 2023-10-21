#include <iostream>  
using namespace std;  
template<class X>
void fun(X a)
{
	cout<<"value of a is  "<<a<<endl;
}
template<class X,class Y>
void fun(X b,Y c)
{
	cout<<"Value of b and c is  "<<b<<"  "<<c<<endl;
}
int main()
{
 fun(5.88);
 fun(12,'a');
}
